#include<iostream>
using namespace std;
void dfs(int **edge,int *visited,int node,int n)
{
cout<<node<<endl;
for(int i=0;i<n;i++)
{
if(edge[node][i]==1 && !visited[i])
{
visited[i]=1;
dfs(edge,visited,i,n);
}
}
}
int main()
{
int n,e;
cout<<"Enter the number of vertices\n";
cin>>n;
cout<<"Enter the number of edges\n";
cin>>e;
int **edge=new int*[n];
for(int i=0;i<n;i++)
{
edge[i]=new int[n];
for(int j=0;j<n;j++)
edge[i][j]=0;
}
int x,y;
//Enter all the edges.
for(int i=0;i<e;i++)
{
cin>>x>>y;
edge[x][y]=1;
edge[y][x]=1;
}
int *visited=new int[n];
for(int i=0;i<n;i++)
visited[i]=0;
visited[0]=1;
dfs(edge,visited,0,n);
delete []visited;
//De-allocate all the memory.
for(int i=0;i<n;i++)
delete []edge[i];
delete []edge;
return 0;
}

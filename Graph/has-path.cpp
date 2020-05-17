#include<iostream>
bool has_path(int **edge,int end,int *visited,int n,int node)
{
if(node==end)
return true;
else
{
for(int i=0;i<n;i++)
{
if(edge[node][i]==1 && !visited[i])
{
visited[i]=1;
bool res= has_path(edge,end,visited,n,i);
if(res==true)
return true;
else
continue;
}
}
return false;
}
}
using namespace std;
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

int start,end;
cout<<"Enter the start node and end node\n";
cin>>start>>end;

int *visited=new int[n];
for(int i=0;i<n;i++)
visited[i]=0;

visited[start]=1; //Visit the start source.
int res=has_path(edge,end,visited,n,start);
if(res)
{
cout<<"Yes there is a path\n";
}
else
{
cout<<"Sorry no path exist\n";
}
//De-allocate all the memory
delete []visited;
for(int i=0;i<n;i++)
delete []edge[i];
delete []edge;
return 0;
}

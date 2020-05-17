#include<iostream>
#include<queue>
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
//we will use queue for BFS and visited array to keep record of which node is visted.
queue<int>q;
int *visited=new int[n];
for(int i=0;i<n;i++)
visited[i]=0;
q.push(0); //We will push the 0-node or say the source node.
visited[0]=1; //Visit the array
while(!q.empty())
{
//We will visit each node
int num=q.front();
cout<<num<<endl;
//Explore all its neighbours who are not yet visited.
for(int i=0;i<n;i++)
{
if(edge[num][i]==1 && !visited[i])
{
q.push(i);
visited[i]=1;
}
}
q.pop();
}
//De-allocate all the memory
delete []visited;
for(int i=0;i<n;i++)
delete []edge[i];
delete []edge;
return 0;
}

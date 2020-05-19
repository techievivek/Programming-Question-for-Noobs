#include<bits/stdc++.h>
using namespace std;
int getMinNode(int *visited,int *distance,int n)
{
int dist=INT_MAX;
int pos=0;
for(int i=0;i<n;i++)
{
if((distance[i]<dist && !visited[i]) )
{
dist=distance[i];
pos=i;
}
}
return pos;
}
void kruskal(int **a,int e,int n)
{
//create a parent array,distance array and the visited array.
int *p=new int[n];
int *visited=new int[n];
int *distance=new int[n];
for(int i=0;i<n;i++)
distance[i]=INT_MAX;
p[0]=-1; //There is no parent to source node.
distance[0]=0;
for(int i=0;i<n-1;i++)
{
int index=getMinNode(visited,distance,n);
visited[index]=1;
for(int j=0;j<n;j++)
{
if(a[i][j]!=0 && distance[j]>a[i][j])
{
distance[j]=a[i][j];
p[j]=i;
}
}
}
//print parent for each node and the distance.
for(int i=1;i<n;i++)
{
cout<<p[i]<<", "<<i<<" :"<<distance[i];
}
}
int main()
{
int n;
cout<<"Enter the number of nodes\n";
cin>>n;
int **a=new int*[n];
for(int i=0;i<n;i++)
{
a[i]=new int[n];
for(int j=0;j<n;j++)
{
a[i][j]=0;
//Initially we will have all the cell filled as 0
}
}
cout<<"Enter the number of edges\n";
int e;
cin>>e;
int x;
int y;
int weight;
//Get all the edges and mark the array
for(int i=0;i<e;i++)
{
cin>>x>>y>>weight;
a[x][y]=weight;
a[y][x]=weight;
}
kruskal(a,e,n);
return 0;
}





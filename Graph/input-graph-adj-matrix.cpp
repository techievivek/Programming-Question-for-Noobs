#include<iostream>
using namespace std;
int main()
{
//Here we have no option of spatial array so we will have to create n^2 array for n-node graph.
int n;
cout<<"Enter the number of nodes of graph\n";
cin>>n;
int **a=new int*[n];
for(int i=0;i<n;i++)
{
a[i]=new int[n];
for(int j=0;j<n;j++)
{
a[i][j]=0;// Initially no two nodes are connected.
}
}
//For each edge we will mark a[i][j] as 1.
int edges;
cout<<"Enter the no of edges\n";
cin>>edges;
int x,y;
for(int i=0;i<edges;i++)
{
//Enter the adjacent pair
cin>>x>>y;
//since un-directed graph so mark from both sides.
a[x][y]=1;
a[y][x]=1;
}
//Print all the edges pair.
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
if(a[i][j]==1)
{
cout<<"("<<i<<", "<<j<<")"<<endl;
}
}
}
}

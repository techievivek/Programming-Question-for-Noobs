#include<bits/stdc++.h>
using namespace std;
struct edges
{
int x;
int y;
int weight;
};
int parent(int x,int p[])
{
if(x==p[x])
{
return x;
}
else
{
return parent(p[x],p);
}
}
bool issafe(int x,int y,int p[])
{
int px=parent(x,p);
int py=parent(y,p);
if(px!=py)
{
p[px]=py;
return true;
}
else
return false;
}
bool sort_now(edges a,edges b)
{
return a.weight<b.weight;
}
void kruskal(edges edge[],int e,int n)
{
sort(edge,edge+e,sort_now); //Array got sorted based on the edge weight in ascending order.
int count=0;
int start=0;
int *p=new int[n];
for(int i=0;i<n;i++)
p[i]=i;
while(count<n-1)
{
edges e1=edge[start];
int x=e1.x;
int y=e1.y;
int weight=e1.weight;
if(issafe(x,y,p))
{
cout<<"( "<<x<<", "<<y<<", "<<": "<<weight<<" )"<<endl;
count++;
}
start++;
}
}
int main()
{
int n;
cout<<"Enter the number of vertices\n";
cin>>n;
int e;
cout<<"Enter the number of edges\n";
cin>>e;
edges* edge=new edges[e];
int x,y,weight;
for(int i=0;i<e;i++)
{
cin>>x>>y>>weight;
edge[i].x=x;
edge[i].y=y;
edge[i].weight=weight;
}
kruskal(edge,e,n);
delete []edge;
return 0;
}

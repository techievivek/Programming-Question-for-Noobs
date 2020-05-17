#include<iostream>
using namespace std;
struct edge_list
{
char start,end;
};
int main()
{
cout<<"Enter the number of the nodes\n";
int n;
cin>>n;
//Input character nodes.
char *a=new char[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
}
//Now we will have to ask how many edges and enter all the edges.
int edges;
cout<<"Enter the number of the edges\n";
cin>>edges;
edge_list edge[edges]; //we have created a structure to store all the edges in pair form in edge list array.
for(int i=0;i<edges;i++)
{
cin>>edge[i].start;
cin>>edge[i].end;
}
//We have all the edges stored now.(Connection from one node/vertices to other.
//Print all the connection.
for(int i=0;i<edges;i++)
{
cout<<"( "<<edge[i].start<<", "<<edge[i].end<<" )"<<endl;
}
cout<<"Enter two nodes between whose you want to check connection\n";
char c,d;
cin>>c;
cin>>d;
//Check all the edgelist for the pair, in worst case it will take o(n2) so we will have to change our storage method.
int i=0;
for(i=0;i<edges;i++)
{
if(edge[i].start==c && edge[i].end==d)
{
cout<<"Yes, we found a result\n";
break;
}
}
if(i==n)
cout<<"Sorry no given node relation exist\n";
return 0;
}

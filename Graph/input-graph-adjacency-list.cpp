#include<bits/stdc++.h>
using namespace std;
int main()
{
cout<<"Enter the size of the nodes\n";
int n;
cin>>n;
int edges;
cout<<"Enter the no of edges\n";
cin>>edges;
vector< vector<int> >v(n);
int x,y;
for(int i=0;i<edges;i++)
{
cin>>x>>y;
v[x].push_back(y);
v[y].push_back(x);
}
cout<<"Printing all the edges\n";
for(int i=0;i<n;i++)
{
for(int j=0;j<v[i].size();j++)
{
cout<<"( "<<i<<", "<<v[i][j]<<") "<<endl;
}
}

}

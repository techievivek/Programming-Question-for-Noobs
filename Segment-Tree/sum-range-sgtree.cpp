#include<iostream>
using namespace std;

//Build tree
void buildTree(int *a,int *tree,int start,int end,int node)
{
if(start==end)
{
tree[node]=a[start];
return;
}
int mid=(start+end)/2;
buildTree(a,tree,start,mid,2*node);
buildTree(a,tree,mid+1,end,2*node+1);
int node_left=tree[2*node];
int node_right=tree[2*node+1];
tree[node]=node_left+node_right;
}

//Retrieve value
int getVal(int *a,int* tree,int start,int end,int l,int r,int node)
{
//3 conditions.
if(r<start || l>end)
return 0;
else if(start>=l && end<=r)
{
return tree[node];
}
else
{
int mid=(start+end)/2;
int res1=getVal(a,tree,start,mid,l,r,2*node);
int res2=getVal(a,tree,mid+1,end,l,r,2*node+1);
return res1+res2;
}
}
//Update tree
void updateTree(int *a,int *tree,int start,int end,int index,int val,int node)
{
if(start==end)
{
a[index]=val;
tree[node]=val;
return;
}
int mid=(start+end)/2;
if(index<=mid)
{
updateTree(a,tree,start,mid,index,val,2*node);
}
else
{
updateTree(a,tree,mid+1,end,index,val,2*node+1);
}
tree[node]=tree[2*node]+tree[2*node+1];
}
int main()
{
int n;
cout<<"Enter the size of the array\n";
cin>>n;
int *a=new int[n];
for(int i=0;i<n;i++)
cin>>a[i];
int *tree=new int[2*n];
buildTree(a,tree,0,n-1,1);
//Printing the segment tree
/*for(int i=1;i<2*n;i++)
{
cout<<tree[i]<<" ";
}*/
//The tree is build
int q;
cout<<"Enter the number of queries\n";
cin>>q;
while(q--)
{
int m;
int p,q;
cin>>m;
if(m==1)
{
cin>>p>>q;
cout<<getVal(a,tree,0,n-1,p,q,1);
//Get sum range between (p,q)
}
else
{
cin>>p>>q;
//Update i'the index by value 
updateTree(a,tree,0,n-1,p,q,1);
}
}

return 0;
}


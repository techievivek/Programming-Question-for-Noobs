#include<bits/stdc++.h>
using namespace std;
struct treeNode
{
int fmax;
int smax;
};
//Build tree
void buildTree(int *a,treeNode *tree,int start,int end,int node)
{
if(start==end)
{
tree[node].fmax=a[start];
tree[node].smax=INT_MIN;
return;
}
int mid=(start+end)/2;
buildTree(a,tree,start,mid,2*node);
buildTree(a,tree,mid+1,end,2*node+1);
treeNode node_left=tree[2*node];
treeNode node_right=tree[2*node+1];
tree[node].fmax=max(node_left.fmax,node_right.fmax);
tree[node].smax=min(max(node_left.fmax,node_right.smax),max(node_right.fmax,node_left.smax));
}

//Retrieve value
treeNode getVal(int *a,treeNode* tree,int start,int end,int l,int r,int node)
{
//3 conditions.
if(r<start || l>end)
{
treeNode node1;
node1.fmax=INT_MIN;
node1.smax=INT_MIN;
return node1;
}
else if(start>=l && end<=r)
{
return tree[node];
}
else
{
int mid=(start+end)/2;
treeNode node_left=getVal(a,tree,start,mid,l,r,2*node);
treeNode node_right=getVal(a,tree,mid+1,end,l,r,2*node+1);
treeNode demo;
demo.fmax=max(node_left.fmax,node_right.fmax);
demo.smax=min(max(node_left.fmax,node_right.smax),max(node_right.fmax,node_left.smax));
return demo;
}
}
//Update tree
void updateTree(int *a,treeNode *tree,int start,int end,int index,int val,int node)
{
if(start==end)
{
a[index]=val;
tree[node].fmax=val;
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
treeNode node_left=tree[2*node];
treeNode node_right=tree[2*node+1];
tree[node].fmax=max(node_left.fmax,node_right.fmax);
tree[node].smax=min(max(node_left.fmax,node_right.smax),max(node_right.fmax,node_left.smax));
}
int main()
{
int n;
cout<<"Enter the size of the array\n";
cin>>n;
int *a=new int[n];
for(int i=0;i<n;i++)
cin>>a[i];
treeNode *tree=new treeNode[3*n];
buildTree(a,tree,0,n-1,1);
//Printing the segment tree
for(int i=1;i<2*n;i++)
{
cout<<tree[i].fmax<<" "<<tree[i].smax<<endl;
}
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
treeNode res=getVal(a,tree,0,n-1,p,q,1);
cout<<res.fmax+res.smax<<endl;
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


#include<iostream>
using namespace std;
struct node
{
int max_sum;
int bprefix_sum;
int bsuffix_sum;
int csum;
};
void buildTree(int *a,int start,int end,node *tree,int node)
{
if(start==end)
{
tree[node].max_sum=a[i];
tree[node].bprefix_sum=a[i];
tree[node].bprefix_sum=a[i];
tree[node].csum=a[i];
return;
}
else
{
int mid=(start+end)/2;
buildTree(a,start,mid,tree,2*n);
buildTree(a,mid+1,end,tree,2*n+1);
tree[node].csum=tree[2*node].csum+tree[2*node+1].csum;
tree[node].bprefix_sum=max(tree[2*node].bprefix_sum,tree[2*node].bprefix_sum+tree[2*node+1].bprefix_sum);
tree[node].bsuffix_sum=max(tree[2*node].bprefix_sum,tree[2*node+1].csum+tree[2*node].bsuffix_sum);
tree[node].max_sum=max(tree[2*node].max_sum,tree[2*node+1].max_sum,tree[2*node].csum+tree[2*n+1].bprefix_sum,tree[2*node+1].csum+tree[2*n].bsuffix_sum,tree[2*n].bsuffix_sum+tree[2*n+1].bprefix_sum);
}
}
int main()
{
int n;
cin>>n;
int *a=new int[n];
node *tree=new node[3*n];
for(int i=0;i<n;i++)
{
tree[i].max_sum=0;
tree[i].bprefix_sum=0;
tree[i].suffix_sum=0;
tree[i].csum=0;
}
for(int i=0;i<n;i++)
cin>>a[i];
buildTree(a,0,n-1,tree,1);
int q;
cout<<"Enter the number of queries\n";
cin>>q;
while(q--)
{
int r,p,q;
cin>>r>>p>>q;
if(r==1)
{
queryTree();
}
else
{
updateTree();
}
}
return 0;
}

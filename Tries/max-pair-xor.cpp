#include<bits/stdc++.h>
using namespace std;
struct nodeTrie
{
nodeTrie* left;
nodeTrie* right;
};
void buildTrie(nodeTrie* head, int n,int *a)
{
nodeTrie* curr=head;
for(int i=0;i<n;i++)
{
int value=a[i];
for(int i=31;i>=0;i--)
{
if((value>>i)&1)
{
//If 1
if(!curr->right)
{
curr->right=new nodeTrie;
}
curr=curr->right;
}
else
{
//If 0
if(!curr->left)
{
curr->left=new nodeTrie;
}
curr=curr->left;
}
}
}   
}
int maxXorPair(nodeTrie* head,int n,int *a)
{
nodeTrie* curr=head;
int max_xor=INT_MIN;
for(int i=0;i<n;i++)
{
int local_xor=0;
int value=a[i];
for(int i=31;i>=0;i--)
{
if((value>>i)&1)
{
if(curr->left)
{
local_xor+=pow(2,i);
curr=curr->left;
}
else
{
curr=curr->right;
}
}
else
{
if(curr->right)
{
local_xor+=pow(2,i);
curr=curr->right;
}
else
{
curr=curr->left;
}
}
}
if(local_xor>max_xor)
max_xor=local_xor;
}
return max_xor;
}
int main()
{
int n;
cin>>n;
int *a=new int[n];
for(int i=0;i<n;i++)
cin>>a[i];
nodeTrie* head=new nodeTrie;
head->right=NULL;
head->left=NULL;
buildTrie(head,n,a);
cout<<maxXorPair(head,n,a)<<endl;
return 0;
}

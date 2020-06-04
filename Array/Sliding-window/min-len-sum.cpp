#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n,s;
cin>>n>>s;
int *a=new int[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
}
int sum=0;
int l=0;
int r=0;
int length=INT_MAX;
for(int i=0;i<n;i++)
{
while(sum<s && r<n)
{
sum+=a[r];
r++;
}
if(sum>=s)
{
length=min(length,r-i+1);
}
sum-=a[i];
}
cout<<length<<endl;
delete []a;
}
return 0;
}

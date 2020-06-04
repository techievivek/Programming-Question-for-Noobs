#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n,k;
cin>>n>>k;
char *a=new char[n];
for(int i=0;i<n;i++)
cin>>a[i];
map<char,int>mp;
int len=0;
for(int i=0,j=0;j<n;j++)
{
mp[a[j]]=j;
if(mp.size()>k)
{
while(i<j && mp[a[i]]!=i)
i++;
mp.erase(a[i++]);
}
len=max(len,j-i+1);
}
cout<<len<<endl;
delete []a;
}
return 0;
}

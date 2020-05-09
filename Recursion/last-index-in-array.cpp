#include<bits/stdc++.h>
using namespace std;
int lastIndex(int a[],int i,int size,int x)
{
if(size==0)
return -1;
else
{
int res=lastIndex(a,i+1,size-1,x);
if(res!=-1)
{
return res;
}
else
{
if(a[i]==x)
{
return i;
}
else
{
return -1;
}
}
}
}
int main()
{
int n;
cout<<"Enter the size of array\n";
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
int x;
cout<<"Enter the element you want to find\n";
cin>>x;
int res=lastIndex(a,0,n,x);
if(res!=-1)
{
cout<<x<<" is at index "<<res<<endl;
}
else
{
cout<<x<<" is not present in array\n";
}
return 0;
}


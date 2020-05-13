#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cout<<"Enter the size of the array\n";
cin>>n;
int *p=new int[n];
for(int i=0;i<n;i++)
cin>>p[i];
int local_max=0;
int g_max=INT_MIN;
for(int i=0;i<n;i++)
{
if(local_max<0)
{
local_max=0;
}
local_max+=p[i];
if(local_max>g_max)
{
g_max=local_max;
}
}
cout<<"Max sum subarray is: "<<g_max<<endl;
delete []p;
return 0;
}

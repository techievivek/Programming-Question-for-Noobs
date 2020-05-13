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
int *output=new int[n];
for(int i=0;i<n;i++)
{
output[i]=1;
for(int j=i-1;j>=0;j--)
{
//if the previous element is greater just continue as it can't be an increasing sequence.
if(p[j]>=p[i])
continue;
//else check if it can change output for i-th index.
if(output[j]+1>output[i])
{
output[i]+=output[j];
}
}
}
//Find max in output array
int max=INT_MIN;
for(int i=0;i<n;i++)
{
if(output[i]>max)
max=output[i];
}
cout<<max<<endl;
return 0;
}

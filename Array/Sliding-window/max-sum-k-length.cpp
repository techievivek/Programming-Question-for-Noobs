#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n,k;
cin>>n>>k;
int *a=new int[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
}
int sum=0;
for(int i=0;i<k;i++)
{
sum+=a[i];
}
int msum=0;
for(int i=k;i<n;i++)
{
if(sum>msum)
msum=sum;
sum-=a[i-k];
sum+=a[i];
}
if(sum>msum)
msum=sum;
cout<<sum<<endl;
delete []a;
}
return 0;
}

#include<iostream>
using namespace std;
int allIndex(int a[],int size,int x)
{
if(size==0)
return 0;
else 
{
if(a[0]==x)
{
return 1+allIndex(a+1,size-1,x);
}
else
{
return allIndex(a+1,size-1,x);
}
}
}
int main() 
{
int n;
cout<<"Enter the size of the array\n";
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
}
int x;
cout<<"Enter the number whose index you want to find\n";
cin>>x;
int res=allIndex(a,n,x);
if(res==0)
{
cout<<"Sorry, The number is not present in array\n";
}
else
{
//For now I am just counting the no of times, you can push into vector to get all index.
cout<<x<<" is present "<<res<<" times";
}
return 0;
}

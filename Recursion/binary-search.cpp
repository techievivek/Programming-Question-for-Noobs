#include<bits/stdc++.h>
using namespace std;
int bSearch(int a[],int start,int end,int x)
{
if(start<=end)
{
int mid=(start+end)/2;
if(a[mid]==x)
{
return mid;
}
else if(a[mid]>x)
{
end=mid-1;
return bSearch(a,start,end,x);
}
else if(a[mid]<x)
{
start=mid+1;
return bSearch(a,start,end,x);
}
}
return -1;
}
int main()
{
int n;
cout<<"Enter the size of the array\n";
cin>>n;
cout<<"Enter the elements of the array\n";
int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
}
sort(a,a+n); //Sort the array before applying the binary search.
int x;
cout<<"Enter the number you want to search\n";
cin>>x;
int res=bSearch(a,0,n-1,x);
if(res!=-1)
{
cout<<"The element "<<x<<" is found at the index "<<res<<endl;
}
else
{
cout<<"Sorry the element can't be found\n";
}
return 0;
}

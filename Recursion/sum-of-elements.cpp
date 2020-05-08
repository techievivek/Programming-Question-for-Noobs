#include<bits/stdc++.h>
using namespace std;
//Head recursion
int sum(int *a,int size)
{
if(size==0)
{
return 0;
}
else
{
return a[0]+sum(a+1,size-1);
}
}
//Tail recursion for same
int sum_elements(int a[],int size, int sum_so_far)
{
if(size==0)
return sum_so_far;
else
{
return sum_elements(a+1,size-1,sum_so_far+a[0]);
}
}
int main()
{
int n;
cout<<"Enter the size of array\n";
cin>>n;
int *a=new int[n]; //Go through My STL repo and look for dyanamic-allocation code for more detail
for(int i=0;i<n;i++)
{
cin>>a[i];
}
//Call function to calculate sum
int sum_of_elements=sum(a,n);
cout<<sum_of_elements<<endl;
cout<<sum_elements(a,n,0);
return 0;
}

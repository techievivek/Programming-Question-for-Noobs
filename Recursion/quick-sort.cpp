#include<bits/stdc++.h>
using namespace std;
int quick_sort(int a[],int start,int end)
{
int pivot_element=a[end];
int pivot_index=start-1;
for(int i=start;i<end;i++)
{
if(a[i]<=pivot_element)
{
pivot_index++;
swap(a[pivot_index],a[i]);
}
}
pivot_index++;
swap(a[pivot_index],a[end]);
return pivot_index;
}
void quick(int a[],int start,int end)
{
if(start<end)
{
int pivot=quick_sort(a,start,end);
quick(a,start,pivot-1);
quick(a,pivot+1,end);
}
}
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
cout<<"Array before sorting\n";
for(int i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
cout<<endl;
quick(a,0,n-1);
cout<<"Array after sorting\n";
for(int i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
cout<<endl;
return 0;
}

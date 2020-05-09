#include<iostream>
using namespace std;
void merge(int a[],int start,int mid,int end)
{
int k[end-start+1]; //Create the start->end element array so that we can store them.
int index=0; //This is for the temporary array index.
int i=start; //for first part (start->mid)
int j=mid+1; //For second part(mid+1->end)
for(;i<=mid && j<=end;index++)
{
if(a[i]<=a[j])
{
//Ith element is smaller and thus it should be copied.
k[index]=a[i++];
}
else
{
//A[i] is greater so a[j] should be copied.
k[index]=a[j++];
}
}
//So now one of them will be empty and other may have some element.
//Just append it.
while(i<=mid)
{
k[index++]=a[i++];
}
while(j<=end)
{
k[index++]=a[j++];
}
//Now the k array is full sorted, we can print to check it.
//Lets copy back to array.
i=0;
j=start;
for(;i<end-start+1;)
{
a[j++]=k[i++];
}
}
void merge_sort(int a[],int start, int end)
{
if(start<end)
{
int mid=(start+end)/2;
merge_sort(a,start,mid);
merge_sort(a,mid+1,end);
merge(a,start,mid,end);
}
}
int main()
{
int n;
cout<<"Enter the size of the array\n";
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
merge_sort(a,0,n-1);
cout<<"Array after sorting\n";
for(int i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
cout<<endl;
return 0;
}

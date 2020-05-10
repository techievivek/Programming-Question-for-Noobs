#include<bits/stdc++.h>
using namespace std;
void sumSubset(int a[],int sum, int size,vector<int>&output)
{
if(sum==0)
{
for(auto i:output)
{
cout<<i<<" ";
}
cout<<endl;
return;
}
if(size==0 && sum!=0)
{
return;
}
if(sum>0 && size==0)
return;
else
{
output.push_back(a[0]);
sumSubset(a+1,sum-a[0],size-1,output);
output.pop_back();
sumSubset(a+1,sum,size-1,output);
}
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
int sum;
cout<<"Enter the sum you want to look\n";
cin>>sum;
vector<int>output;
sumSubset(a,sum,n,output);
return 0;
}

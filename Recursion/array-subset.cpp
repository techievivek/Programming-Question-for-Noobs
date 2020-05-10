#include<bits/stdc++.h>
using namespace std;
void printSubset(char a[],int size,string output)
{
if(size==0)
{
cout<<output<<endl;
}
else
{
//we will either chhose a char, or not choose it. (That's why total no of subset are 2^n)
//Choose and move forward
printSubset(a+1,size-1,output+a[0]);
printSubset(a+1,size-1,output);
}
}
int main()
{
int n;
cout<<"Enter the size of the array\n";
cin>>n;
char a[n];
cout<<"Enter the elements of the array\n";
for(int i=0;i<n;i++)
{
cin>>a[i];
}
//printing all the subset/subarray
string output="";
printSubset(a,n,output);
//we can also use bit-manipulation to print all the subset.(Check in bit manipulation folder)
return 0;
}

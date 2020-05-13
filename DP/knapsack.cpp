#include<bits/stdc++.h>
using namespace std;
int knapsack(int* weight, int *value,int limit,int **output,int n)
{
if(limit<0)
return INT_MIN;
if(n==0)
{
return 0;
}
if(limit==0)
{
return 0;
}
if(output[limit][n]!=-1)
return output[limit][n];
//choosing the first weight
int output1=value[0]+knapsack(weight+1,value+1,limit-weight[0],output,n-1);
//not choosing the first weight
int output2=knapsack(weight+1,value+1,limit,output,n-1);
output[limit][n]=max(output1,output2);
return output[limit][n];
}
int main()
{
int n;
cout<<"Enter the size of weight array\n";
cin>>n;
int *weight=new int[n];
int *value=new int[n];
cout<<"Enter the weight and corresponding value for the weights and value array\n";
for(int i=0;i<n;i++) 
{
cin>>weight[i];
cin>>value[i];
}
int limit;
cout<<"Enter the maximum weight holdable by knapsack\n";
cin>>limit;
//[n+1][n+1] 2-d array
int **output=new int*[n+1];
for(int i=0;i<=n;i++)
{
output[i]=new int[n+1];
for(int j=0;j<=n;j++)
{
output[i][j]=-1;
}
}
cout<<knapsack(weight,value,limit,output,n);
delete []weight;
delete []value;
for(int i=0;i<=n;i++)
{
delete []output[i];
}
delete []output;
}

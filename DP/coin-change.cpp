#include<iostream>
using namespace std;
int no_of_change(int n, int *p,int size,int **output)
{
if(size==0)
{
return 0;
}
if(n==0)
{
return 1;
}
if(n<0)
{
return 0;
}
if(output[n][size]!=-1)
{
return output[n][size];
}
else
{
cout<<"Using "<<p[0]<<"n is "<<n<<" size is "<<size<<endl;
int output1=no_of_change(n-p[0],p,size,output);
int output2=no_of_change(n,p+1,size-1,output);
output[n][size]=output1+output2;
return output1+output2;
}
}
int main()
{
int n;
cout<<"Enter the amount for which you are looking for the change\n";
cin>>n;
int size;
cout<<"Enter the number of denominations\n";
cin>>size;
int *p=new int[size];
for(int i=0;i<size;i++)
{
cin>>p[i];
}
int **q=new int*[n+1];
for(int i=0;i<=n;i++)
{
q[i]=new int [size+1];
for(int j=0;j<=size;j++)
{
q[i][j]=-1;
}
}
cout<<no_of_change(n,p,size,q)<<endl;
for(int i=0;i<=n;i++)
{
delete []q[i];
}
delete []p;
return 0;
}

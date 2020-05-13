#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter the dimension of the square matrix\n";
cin>>n;
int **a=new int*[n];
for(int i=0;i<n;i++)
{
a[i]=new int[n];
for(int j=0;j<n;j++)
{
cin>>a[i][j];
}
}
//we will create a 2d dp, for dp[i][j] it will store the minimum cost to go from i,h to n-1,n-1
int **p=new int*[n];
for(int i=0;i<n;i++)
{
p[i]=new int[n];
}
//we will start storing the value from the end.
p[n-1][n-1]=a[n-1][n-1];
//fill last row
for(int i=n-2;i>=0;i--)
{
p[n-1][i]=a[n-1][i]+p[n-1][i+1];
}
//Fill last column
for(int i=n-2;i>=0;i--)
{
p[i][n-1]=a[i][n-1]+p[i+1][n-1];
}
for(int i=n-2;i>=0;i--)
{
for(int j=n-2;j>=0;j--)
{
p[i][j]=a[i][j]+min(p[i+1][j],min(p[i][j+1],p[i+1][j+1]));
}
}
int res=p[0][0];
for(int i=0;i<n;i++)
{
delete []p[i];
}
delete []p;
cout<<res<<endl;
//Fill second last row to top row one-by-one by comparing right,bottom and diagonal.
return 0;
}

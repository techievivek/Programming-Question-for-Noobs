#include<iostream>
using namespace std;
#define x 1000000007
int ways(int **a,int n,int sx,int sy,int **res,int **ores)
{
if(sx==n-1 && sy==n-1)
return 1;
else if(sx<0 || sx>=n || sy<0 || sy>=n || a[sx][sy]==0 || res[sx][sy]==1)
return 0;
else if(ores[sx][sy]!=-1)
return ores[sx][sy];
else
{
res[sx][sy]=1; //Choose this path.
//explore all the 4 directions.
int sres= (ways(a,n,sx-1,sy,res,ores)%x+ways(a,n,sx+1,sy,res,ores)%x+ways(a,n,sx,sy-1,res,ores)%x+ways(a,n,sx,sy+1,res,ores)%x)%x;
res[sx][sy]=0;
ores[sx][sy]=sres;
return sres;
}
}
int main()
{
int n;
cin>>n;
int **a=new int*[n];
//Insert the elements of maze
for(int i=0;i<n;i++)
{
a[i]=new int[n];
for(int j=0;j<n;j++)
{
cin>>a[i][j];
}
}
int **res=new int*[n];
//Insert the elements of maze
for(int i=0;i<n;i++)
{
res[i]=new int[n];
for(int j=0;j<n;j++)
{
res[i][j]=0;
}
}
int **ores=new int*[n];
//Insert the elements of maze
for(int i=0;i<n;i++)
{
ores[i]=new int[n];
for(int j=0;j<n;j++)
{
ores[i][j]=-1;
}
}
cout<<ways(a,n,0,0,res,ores)<<endl;
for(int i=0;i<n;i++)
delete []a[i];
delete []a;
return 0;
}

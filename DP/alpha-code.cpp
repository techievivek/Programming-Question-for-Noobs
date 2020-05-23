#include<bits/stdc++.h>
using namespace std;
int noofcodes(char *p,int n,int *res)
{
if(n==0 || n==1)
return 1;
else if(n<0)
{
return 0;
}
else if(res[n]!=-1)
return res[n];
else
{
int res1=0,res2=0;
res1=noofcodes(p+1,n-1,res);
int num1=*p-'0';
int num2=*(p+1)-'0';
if(num1*10+num2<=26)
{
res2=noofcodes(p+2,n-2,res);
}
res[n]=res1+res2;
return res1+res2;
}
}
int main()
{
int n;
cin>>n;
char *p=new char[n];
cout<<"Enter the string\n";
cin>>p;
int *res=new int[n+1];
for(int i=0;i<=n;i++)
res[i]=-1;
cout<<noofcodes(p,n,res);
delete []p;
return 0;
}

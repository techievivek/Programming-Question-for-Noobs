#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter the nth number\n";
cin>>n;
//We don't have to create the full array as only two previous results are required. But lets create it.
int *p=new int[n+1];
p[0]=0;
p[1]=1;
for(int i=2;i<=n;i++)
{
p[i]=p[i-1]+p[i-2];
}
int res=p[n];
delete []p;
cout<<res<<endl;
return 0;
}

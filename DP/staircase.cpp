#include<bits/stdc++.h>
using namespace std;
int main()
{
cout<<"Enter the number of steps\n";
//WE have 1,2,3 steps to take.
int n;
cin>>n;
//create dynamically allocated memory for array.
int *p=new int[n+1];
p[0]=1;
p[1]=1;
p[2]=2;
for(int i=3;i<=n;i++)
{
p[i]=p[i-1]+p[i-2]+p[i-3];
}
int res=p[n]; //res for n-stair using 1,2,3
delete []p; //free the dynamically allocated memory.
cout<<res<<endl;
}

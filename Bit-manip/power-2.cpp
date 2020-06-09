#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
if( n && (n&(n-1))==0)
cout<<"Power of two"<<endl;
else 
cout<<"Not Power of two"<<endl;
}
return 0;
}

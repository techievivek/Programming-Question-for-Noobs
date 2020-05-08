#include<iostream>
using namespace std;
int factorial(int n,int prod)
{
if(n==0 || n==1)
return prod;
else
{
//Don't do n-- as it is postfix operator and value will go same as n for next call and hence infinite recursion.
return factorial(n-1, prod*n);
}
}
int main()
{
int n;
cout<<"Enter the number whose factorial you want\n";
cin>>n;
int fact=factorial(n,1);
cout<<fact<<endl;
return 0;
}

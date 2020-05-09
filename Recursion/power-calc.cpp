#include<bits/stdc++.h>
using namespace std;
int powerof(int x,int n)
{
if(n==0)
return 1;
if (x==0)
{
return 0;
}
if(x==1)
{
return 1;
}
if(n==1)
{
return x;
}
else
{
int power=powerof(x,n-1); //Don't do n-- as it is postfix operator and recursion will go infinite.
return x*power;
}
}
int main()
{
int x,n;
cout<<"Enter the number\n";
cin>>x;
cout<<"Enter the power to which it will be raised\n";
cin>>n;
//We have to calculate x^n
int power=powerof(x,n);
cout<<power<<endl;
return 0;
}


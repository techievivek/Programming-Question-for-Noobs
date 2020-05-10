#include<iostream>
using namespace std;
int numberOfWays(int n)
{
if(n==0)
return 1;
else if(n<0)
return 0;
else
{
//Take 1 step, 2 step or 3 step
return numberOfWays(n-1)+numberOfWays(n-2)+numberOfWays(n-3);
}
}
int main()
{
int n;
cout<<"Enter the stair length(n)\n";
cin>>n;
cout<<"The total number of ways to reach the top of stair is: "<<numberOfWays(n)<<endl;
return 0;
}

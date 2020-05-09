#include<bits/stdc++.h>
using namespace std;
int num_of_digit(int n)
{
if(n<10)
return 1;
else
{
return 1+num_of_digit(n/10);
}
}
int main()
{
int n;
cout<<"Enter the number\n";
cin>>n;
int num_of_dig=num_of_digit(n);
cout<<num_of_dig<<endl;
return 0;
}


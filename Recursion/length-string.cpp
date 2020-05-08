#include<iostream>
using namespace std;
int length(char* s)
{
if(s[0]=='\0')
{
return 0;
}
else
{
return 1+length(s+1);
}
}
int main()
{
int n;
char s[100];
cout<<"Enter the string\n";
cin>>s; //Input-stream and the variable(char *)
int len=length(s);
cout<<len;
}

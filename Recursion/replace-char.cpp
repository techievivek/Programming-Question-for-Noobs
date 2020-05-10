#include<iostream>
using namespace std;
void replaceX(char p[],char a,char b)
{
if(*p=='\0')
{
return;
}
else
{
if(*p==a)
{
*p=b;
}
replaceX(p+1,a,b);
}
}
int main()
{
char *p=new char[100];
cout<<"Enter the string\n";
cin>>p;
char a,b;
cin>>a>>b;
replaceX(p,a,b);
cout<<p;
return 0;
}

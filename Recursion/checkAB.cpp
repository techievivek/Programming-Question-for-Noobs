#include<iostream>
using namespace std;
bool checkAB(char c[])
{
if(*c=='\0')
return true;
else
{
if(*c=='a')
{
if(*(c+1)=='a')
{
return checkAB(c+1);
}
else if(*(c+1)=='\0')
{
return true;
}
else if(*(c+1)=='b' && *(c+2)=='b')
{
return checkAB(c+3);
}
else
{
return false;
}
}
else
{
return false;
}
}
}
int main()
{
/*
a. The string begins with an 'a'
b. Each 'a' is followed by nothing or an 'a' or "bb"
c. Each "bb" is followed by nothing or an 'a'Rule followed by the string
*/
cout<<"Enter a AB-type string\n";
char *c=new char[1000];
cin>>c;
if(checkAB(c))
{
cout<<"The string follows the above rule\n";
}
else
{
cout<<"The string doesn't follow the rules\n";
}
return 0;
}



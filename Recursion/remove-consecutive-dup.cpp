#include<iostream>
using namespace std;
void removeOccurence(char a[])
{
if(*a=='\0')
{
return;
}
if(*a==*(a+1))
{
int i=0;
while(a[i]!='\0')
{
a[i]=a[i+1];
i++;
}
return removeOccurence(a);
}
return removeOccurence(a+1);
}
int main()
{
char *p=new char[1000];
cout<<"Enter the string\n";
cin>>p;
removeOccurence(p);
cout<<p<<endl;
return 0;
}

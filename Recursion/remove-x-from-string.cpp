#include<bits/stdc++.h>
using namespace std;
void removeX(char *p,char x)
{
if(*p=='\0')
{

}
else
{
if(*p==x)
{
/*We can also start from 1st character and do p[i-1]=p[i], but in last after loop we will have to /add a[i-1]=a[i] to include '\0'*/
int i=0;
while(p[i]!='\0')
{
p[i]=p[i+1];
i++;
}
removeX(p,x);
}
else
{
removeX(p+1,x);
}
}
}
int main()
{
char a[100];
cout<<"Enter the string\n";
cin>>a;
char ch;
cout<<"Enter the string you want to remove\n";
cin>>ch;
removeX(a,ch);
cout<<a<<endl;
return 0;
}

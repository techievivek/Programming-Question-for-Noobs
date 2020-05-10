/* You will be given an integer and you will have to print all the keypad combination*/
#include<bits/stdc++.h>
using namespace std;
void keypadCode(int n,string output,map<int,string>&mp)
{
if(n==0 || n==1)
{
cout<<output<<endl;
return;
}
int num=n%10;
string s=mp[num];
for(int i=0;i<s.size();i++)
{
 keypadCode(n/10,output+s[i],mp);
}
}
int main()
{
map<int,string>mp;
mp[2]="ABC";
mp[3]="DEF";
mp[4]="GHI";
mp[5]="JKL";
mp[6]="MNO";
mp[7]="PQRS";
mp[8]="TUV";
mp[9]="WXYZ";
int n;
cout<<"Enter the number whose keypad combination you want\n";
cin>>n;
string output="";
keypadCode(n,output,mp);
return 0;
}

#include<bits/stdc++.h>
using namespace std;
void permutation(string s,string output)
{
if(s.size()==0)
{
cout<<output;
cout<<endl;
}
else
{
for(int i=0;i<s.size();i++)
{
string small=s.substr(i,1);
s.erase(i,1);
output+=small; //choose
permutation(s,output); //explore
//unchoose
output.pop_back();//whatever we choose just remove
s.insert(i,small);// now insert the item at same position where we took it out.
}
}
}
int main()
{
string *s=new string;
cout<<"Enter the string\n";
cin>>*s;
string output="";
permutation(*s,output);
return 0;
}

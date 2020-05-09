#include<bits/stdc++.h>
using namespace std;
int firstIndex(vector<int>&v,int i,int x)
{
if(v.size()==i)
{
return -1;
}
else if(v[i]==x)
{
return i;
}
else
{
return firstIndex(v,i+1,x);
}
}
int main()
{
int n;
cout<<"Enter the Size of array\n";
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++)
{
cin>>v[i];
}
int x;
cout<<"Enter the number to find\n";
cin>>x;
int pos=firstIndex(v,0,x);
if(pos!=-1)
{
cout<<x<<" is present at "<<pos<<" index"<<endl;
}
else
{
cout<<x<<" is not present in the array\n";
}
return 0;
}


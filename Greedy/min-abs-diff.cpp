#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
}
sort(a,a+n);
int diff=INT_MAX;
for(int i=0;i<n-1;i++)
{
if(abs(a[i]-a[i+1])<diff)
diff=abs(a[i]-a[i+1]);
}
cout<<diff<<endl;
return 0;
}
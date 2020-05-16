#include<bits/stdc++.h>
using namespace std;
bool large(int a,int b)
{
    return a>b;
}
int main()
{
    //Write your code here
    int n;
    cin>>n;
    int *a=new int[n+1];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n,large);
    long long int res=0;
    for(int i=0;i<n;i++)
        res+=(a[i])*(pow(2,i));
    cout<<res;
    return 0;
}
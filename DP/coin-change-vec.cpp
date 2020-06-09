#include<bits/stdc++.h>
using namespace std;
int noofchange(int amount,vector<int>& coins, int **res)
    {
        if(amount<0)
            return 0;
else if(amount==0)
    return 1;
        else if (coins.size()==0 && amount!=0)
            return 0;
        else if(res[amount][coins.size()]!=-1)
        {
return res[amount][coins.size()];
        }
        else
        {
int r1= noofchange(amount-coins.front(),coins,res);
            int val=coins.front();
            coins.erase(coins.begin());
int r2=noofchange(amount,coins,res);
            coins.insert(coins.begin(),val);
res[amount][coins.size()]=r1+r2;
return res[amount][coins.size()];
        }
    }
int change(int amount, vector<int>& coins) {
        int **res=new int*[amount+1];
        for(int i=0;i<=amount;i++)
        {
res[i]=new int[coins.size()+1];
            for(int j=0;j<=coins.size()+1;j++)
            {
res[i][j]=-1;
            }
        }
return noofchange(amount,coins,res);
}
int main()
{
int n;
cout<<"Enter the amount\n";
cin>>n;
vector<int>v{1,2,5};
int res=change(n,v);
cout<<res<<endl;
return 0;
}


#include <bits/stdc++.h>

using namespace std;
vector<int> v;

long long int dp[51];
long long int fibonacci(long long int i)
{
    if(dp[i]>-1)
        return dp[i];
    if(i==0){
        return dp[i]=0;
    }
    else if(i==1){
        return dp[i]=1;
    }
    else
        return dp[i]=fibonacci(i-2)+fibonacci(i-1);
    return 0;
}


int main()
{
    memset(dp,-1,sizeof(dp));
    long long int n,f;
    cin>>n;
    if(n==0)
    {
        cout<<"0 0 0"<<endl;
        return 0;
    }
    if(n==1)
    {
        cout<<"0 0 1"<<endl;
        return 0;
    }
    if(n==2)
    {
        cout<<"0 1 1"<<endl;
        return 0;
    }
    dp[50]=fibonacci(50);

    long long int m,sum=0;
    for(long long int i=0;i<50;i++)
    {
        if(n==dp[i])
        {
            m=i;
            break;
        }
    }
    sum = dp[m-1]+dp[m-3]+dp[m-4];

    if(sum==n)
        cout<<dp[m-4]<<" "<<dp[m-3]<<" "<<dp[m-1]<<endl;
    else
        cout<<"I'm too stupid to solve this problem"<<endl;

    return 0;
}

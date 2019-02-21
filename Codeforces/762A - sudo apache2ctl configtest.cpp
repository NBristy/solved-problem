#include <bits/stdc++.h>

using namespace std;
vector<long long int> divisor;

void divisors(long long int n)
{
    for(long long int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(i*i==n)
            {
                divisor.push_back(i);
            }
            else
            {
                divisor.push_back(i);
                divisor.push_back(n/i);
            }
        }
    }
    sort(divisor.begin(),divisor.end());

}

int main()
{
    long long int n,k;
    cin>>n>>k;
    divisors(n);
    if(divisor.size()<k)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<divisor[k-1]<<endl;
    }
    return 0;
}

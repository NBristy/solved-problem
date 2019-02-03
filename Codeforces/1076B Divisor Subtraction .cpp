#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long int n;
    cin>>n;
    if(n%2==0)
    {
        cout<<n/2<<endl;
        return 0;
    }

    else
    {
        for(long long int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                long long int p=((n-i)/2)+1;
                cout<<p<<endl;
                return 0;
            }
        }
        cout<<"1"<<endl;
    }
    return 0;
}
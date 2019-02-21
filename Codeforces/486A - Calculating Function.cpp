#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,m;
    cin>>n;
    if(n%2==0)
        m=n/2;
    else
        m=-((n+1)/2);
    cout<<m<<endl;
    return 0;
}

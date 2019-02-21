#include <bits/stdc++.h>

using namespace std;

int primenumber(int q)
{
    bool isprime = true;
    for(int i=2; i<=q-1; i++)
        {
            if(q%i==0)
            {
                isprime = false;
                break;
            }
        }
    return isprime;
}


int main()
{
    int n,k,x,p=0,c=0;
    int arr[1000];
    bool prime = true;
    cin >> n >> k;

    for(int m=2; m<=n; m++)
    {
        prime = primenumber(m);
        if(prime==true)
        {
            arr[p]= m;
            p++;
        }

    }
    for(int i=0;i<p;i++)
    {
        x = arr[i]+arr[i+1]+1;
        for(int j=0; j<p; j++)
        {
            if(x==arr[j])
                c++;
        }
    }
    if(c>=k)
    {
        cout<< "YES" <<endl;
    }
    else
        cout<< "NO" <<endl;

    return 0;
}

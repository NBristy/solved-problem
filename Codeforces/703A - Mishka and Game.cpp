#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int m[n],c[n];
    for(int i=0;i<n;i++)
    {
        cin>>m[i]>>c[i];
    }
    int msum=0,csum=0;
    for(int i=0;i<n;i++)
    {
        if(m[i]>c[i])
        {
            msum++;
        }
        else if(c[i]>m[i])
        {
            csum++;
        }
    }
    if(msum>csum)
    {
        cout<<"Mishka"<<endl;
    }
    else if(msum==csum)
    {
        cout<<"Friendship is magic!^^"<<endl;
    }
    else if(csum>msum)
    {
        cout<<"Chris"<<endl;
    }
    return 0;
}

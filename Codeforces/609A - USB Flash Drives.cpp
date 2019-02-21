#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,temp,sum=0,count=1;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum>=m)
            break;
        else
            count++;
    }
    cout<<count<<endl;
    return 0;
}
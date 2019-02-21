#include <bits/stdc++.h>

using namespace std;
vector<int> v;

int main()
{
    int n,k,m;
    cin>>n>>k;
    int arr1[n],cnt=0;;
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<k;i++)
    {
        cin>>m;
        v.push_back(m);
    }

    sort(v.rbegin(),v.rend());
    for(int i=0,j=0;i<n;i++)
    {
        if(arr1[i]==0)
        {
            arr1[i]=v[j];
            j++;
        }
    }

    for(int i=0;i<n-1;i++)
    {
        if(arr1[i]<=arr1[i+1])
        {
            cnt++;
        }
    }
    if(cnt==n-1)
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;


    v.erase(v.begin(),v.end());

    return 0;
}

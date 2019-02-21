#include <bits/stdc++.h>

using namespace std;
vector<pair<int,int> > v;
pair<int,int> p;

int main()
{
    int n,k,m;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        p.first=m;
        p.second=i;
        v.push_back(p);
    }
    sort(v.begin(),v.end());
    int sum=0,cnt=0;
    for(int i=0;i<n;i++)
    {
        sum+= v[i].first;
        if(sum<=k)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    for(int i=0;i<cnt;i++)
    {

        cout<<v[i].second+1<<" ";
    }

    return 0;
}

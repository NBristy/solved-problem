#include <bits/stdc++.h>
//L - I Wanna Be the Guy

using namespace std;

int main()
{
    int n,p,q,temp;
    cin>>n>>p;
    set<int>ss;
    for(int i=0;i<p;i++)
    {
        cin>>temp;
        ss.insert(temp);
    }
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>temp;
        ss.insert(temp);
    }
    if(ss.size()==n)
    {
        cout<<"I become the guy."<<endl;
    }
    else
        cout<<"Oh, my keyboard!"<<endl;
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int cnt=0;
    for(int i=0,m=n-1;i<n/2;i++,m--)
    {
        if(s[i]!=s[m])
        {
            cnt++;
        }
    }
    if(n%2==0 && cnt==1)
        cout<<"YES"<<endl;
    else if(n%2!=0 && cnt<=1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    
    return 0;
}

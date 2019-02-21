#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k, w, p, arr[26],cnt=0;
    string s,str="";
    cin>>k>>s;
    memset(arr,0,sizeof(arr));

    for(int i=0;i<s.size();i++)
    {
        arr[s[i]-'a']++;
    }

    for(int i=0;i<26;i++)
    {
        if((arr[i])%k!=0)
        {
            cnt++;
            cout<<"-1"<<endl;
            break;
        }
    }
    string ss="";
    if(cnt==0)
    {
        for(int m=0;m<26;m++)
        {
            w=arr[m]/k;
            p=m+'a';
            for(int j=0;j<w;j++)
            {
                ss+=char(p);
            }
        }
        for(int i=0;i<k;i++)
            cout<<ss;
        cout<<endl;

    }
    return 0;
}

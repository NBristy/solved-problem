#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s="";
    cin>>s;
    char temp;
    int x=0;
    int z=s.size();
    for(int j=0;j<=z;j=j+2)
    {
        for(int i=0;i<=z-2;i=i+2)
        {
            if((s[i]-'0')>0 || (s[i]-'0')<4)
                {
                    if(s[i]>s[i+2])
                    {
                        temp=s[i];
                        s[i]=s[i+2];
                        s[i+2]=temp;
                    }
                }
            else
                {
                    x+=1;
                    break;
                }
        }
    }
    if(x==0)
        cout<<s<<endl;
    else
        cout<<"Only 1,2,3 numbers allowed"<<endl;


    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str,s="";
    cin>>str;
    int n=str.size();
    int x=0;
    char c;
    for(int i=0;i<n;i++)
    {
        c=str[i];
        if (isupper(c))
            c=tolower(c);
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y')
        {
            continue;
        }
        else
        {
            s+=".";
            s+=c;
        }
    }
   cout<<s<<endl;

    return 0;
}

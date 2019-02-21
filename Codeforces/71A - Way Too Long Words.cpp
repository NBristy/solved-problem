#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,w;
    cin >> n;
    string str[n];
    for(int i=0;i<n;i++)
    {
        cin >> str[i];
    }
    for(int i=0;i<n;i++)
    {
        string s=str[i];
        string mid;
        int m = s.size();
        if(m>10)
        {
            w = m-2;
            stringstream ss;
            ss<<w;
            mid=ss.str();
            s = s[0] + mid + s[m-1];
            cout << s <<endl;
        }
        else
            cout << s <<endl;
    }

    return 0;
}

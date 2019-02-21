#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    bool white=true;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            char c;
            cin>>c;
            if(c=='C'||c=='M'||c=='Y')
            {
                white=false;
            }
        }
    }
    if(white)
    {
        cout<<"#Black&White"<<endl;
    }
    else
        cout<<"#Color"<<endl;

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x=0;
    cin>>n;
    int arr[] = {4,7,44,47,74,77,444,447,474,477,744,747,777};
    for(int i=0;i<=12;i++)
        {
            if(n%arr[i]==0)
                x++;
        }

    if(x>0)
        cout <<"YES"<<endl;
    else
        cout <<"NO"<<endl;

    return 0;
}

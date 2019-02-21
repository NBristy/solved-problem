#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int w;
    cin >> w;
    while(w>=1 && w<=100)
    {
        if(w==2)
        {
            cout << "NO" << endl;
            break;
        }
        else if(w%2==0)
        {
            cout << "YES" << endl;
            break;
        }
        else
        {
            cout << "NO" << endl;
            break;
        }
    }

    return 0;
}

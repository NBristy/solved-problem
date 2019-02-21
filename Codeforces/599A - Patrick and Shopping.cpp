#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int sum=0;
    if(n1<=n2)
    {
        sum += n1;
        if(n3 <=(n1+n2))
        {
            sum += n3;
            if(n2<=(n1+n3))
            {
                sum += n2;
            }
            else if((n1+n3)<n2)
            {
                sum += n1+n3;
            }
        }
        else if((n1+n2)<n3)
        {
            sum += (n1+n2);
            if(n2<=(n1+n3))
            {
                sum += n2;
            }
            else if((n1+n3)<n2)
            {
                sum += n1+n3;
            }
        }
    }
    else
    {
        sum += n2;
        if((n2+n1)<=n3)
        {
            sum += n2+n1;
            if(n1<=(n3+n2))
            {
                sum += n1;
            }
            else if((n3+n2)<n1)
            {
                sum += n3+n2;
            }

        }
        else if(n3<(n1+n2))
        {
            sum += n3;
            if(n1<=(n3+n2))
            {
                sum += n1;
            }
            else if((n3+n2)<n1)
            {
                sum += n3+n2;
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}

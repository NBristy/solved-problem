#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string str[n];
    int arr[n],mx=-1,in;
    memset(arr,0,sizeof(arr));
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
        for(int j=0;j<i;j++)
        {
            if(str[i]==str[j])
            {
                arr[j]+=1;
            }
        }
    }
    for(int k=0;k<n;k++)
    {
        if(arr[k]>mx)
        {
            mx = arr[k];
            in=k;
        }
    }
    cout<<str[in]<<endl;
    return 0;
}

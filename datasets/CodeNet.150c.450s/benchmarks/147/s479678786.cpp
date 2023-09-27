#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,counter=0,a[100000]={0};
    cin>>n;
        for(int j=1;j*j<=n;j++)
        {
            for(int k=1;k*k<=n;k++)
            {
                for(int l=1;l*l<=n;l++)
                {
                        a[j*j+k*k+l*l+j*k+k*l+l*j]++;
                }
            }
        }
        for(int i=1;i<=n;i++)
        {
            cout<<a[i]<<'\n';
        }
    return 0;
}
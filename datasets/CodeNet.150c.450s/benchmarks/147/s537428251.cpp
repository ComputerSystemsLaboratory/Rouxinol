#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 10050
#define mod 1000000007
vector<ll>v(MAX+1,0);
ll computeTotient(ll n)
{
    ll res=n;
    ll tmp=n;
    for(int i=2;i<=sqrt(tmp);i++)
    {
        if(n%i==0){
            res-=(res/i);
            while(n%i==0)
                n/=i;
        }

    }
    if(n>1)
    {
        res-=(res/n);
    }
    return res;

}
int main()
{
    for(int i=1;i<=105;i++)
    {
        for(int j=1;j<=105;j++)
        {
            for(int k=1;k<=105;k++)
            {
                int val=i*i+j*j+k*k+i*j+j*k+k*i;
                if(val<MAX)
                    v[val]++;
            }
        }
    }
    ll n;
    cin >> n;
    for(int i=1;i<=n;i++)
        cout<<v[i]<<'\n';
} 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);
#define all(x) x.begin(),x.end()
#define pb push_back
#define pf push_front
#define ff first
#define ss second
#define vll vector<ll>
#define sll set<ll>
#define pll pair<ll, ll>
#define vpll vector<pll>
#define endl "\n"
const ll maxn = 2e5+2;

int main()
{
    fastio;
    ll i, j, k, n, u, v, t=0;
    ll a[maxn];
    memset(a,0,sizeof(a));

    cin>>n;
    for ( i = 1; i < 101; i++)
    {
        for ( j = 1; j < 101; j++)
        {
            for ( k = 1; k < 100; k++)
            {
                a[i*i+j*j+k*k+i*j+j*k+i*k]++;
            }
        }
    }
    for ( i = 1; i <= n; i++)
    {
        cout<<a[i]<<endl;
    }
        

        
    return 0;
}
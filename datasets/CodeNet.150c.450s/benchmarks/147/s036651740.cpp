#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Common file
#include <ext/pb_ds/assoc_container.hpp>
// Including tree_order_statistics_node_update
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>



#define pb push_back
#define F first
#define S second
#define rep(i,n) for(int i = 0; i < (n); i++)

using ll = long long;
using ld = long double;
using ul = unsigned long long;
using ii = pair<int, int>;
#define Mosta     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ReadFile            freopen("input.in","r",stdin)
#define WriteFile           freopen("output.txt","w",stdout)
const ll mod7 = 1000000007,mod = 1000000000,OO = 0x3f3f3f3f;
const ld EPS = 1e-7;
double Pi=acos(-1);
const ld rad=Pi/180.0;
ll power(ll x, ll y, ll p)
{
    ll res = 1;
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;
            y = y>>1;
            x = (x*x) % p;
    }
    return res;
}
ll nCr (ll n,ll m)
{
    return(m == 0)?1:n*nCr(n-1,m-1)/m;
}

/*****************************************************/

const int N = 1e4 + 5;
int a[N] , n;

int main()
{
    cin >> n;

    memset(a , 0 , sizeof a);

    for(int x = 1; x <= 100; ++x)
        for(int y = 1; y <= 100; ++y)
            for(int z = 1; z <= 100; ++z) {
                ll f = x*x + y*y + z*z + x*y + x*z + y*z;
                if(f <= 10000)
                    a[f]++;
            }

    for(int i = 1; i <= n; ++i)
        cout << a[i] << "\n";

    return 0;
}

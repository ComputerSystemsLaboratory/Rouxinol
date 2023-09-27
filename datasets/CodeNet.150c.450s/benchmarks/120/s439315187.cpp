
#include <algorithm>
#include <iostream>
#include <string.h>
#include <map>
#include <queue>

using namespace std;

#define int_ int64_t
#define pb push_back
#define mp make_pair
#define ll long long
#define ull unsigned ll
#define db double
#define lb long double
#define INF 0x3f3f3f3f
#define MOD 1000000007
#define PII pair<int, int>

const ll N=10005;
ll n,m,c[10][N];

int main()
{
    while (true) {
        scanf("%lld%lld",&n,&m);
        if (n==0&&m==0) break;
        for (ll i=0;i<n;i++) {
            for (ll j=0;j<m;j++) {
                scanf("%lld",&c[i][j]);
            }
        }
        vector<ll> vec;
        for (ll i=0;i<m;i++) {
            ll tmp=0;
            for (ll j=0;j<n;j++) {
                tmp|=(c[j][i]<<j);
            }
            vec.pb(tmp);
        }
        ll ans=0;
        for (ll i=0;i<(1ll<<n);i++) {
            ll tmp=0;
            for (ll j:vec) {
                ll ones=__builtin_popcount(i^j);
                tmp+=max(ones,n-ones);
            }
            ans=max(ans,tmp);
        }
        printf("%lld\n",ans);
    }
}

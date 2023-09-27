#include <bits/stdc++.h>

#define rep(n) for(int i=0;i<n;i++)
#define repp(j, n) for(int j=0;j<n;j++)
#define reppp(i, m, n) for(int i=m;i<n;i++)
#define all(c) c.begin(), c.end()
#define rall(c) c.rbegin(), c.rend()
#define MOD 1000000007
#define EPS 1e-9
 
using namespace std;

typedef long long ll;
typedef pair<ll, ll> Pll;
typedef pair<int, int> Pii;
struct edge{int from, to; ll cost;};

ll productmod(ll x, ll y){
  if(x*y >= MOD) return (x*y) % MOD;
  else return x*y;
}

ll powmod(ll a, ll t){
    ll ret = 1;
    while(t){
        if(t & 1){
            ret = productmod(ret, a);
        }
        a = productmod(a, a);
        t >>= 1;
    }
    return ret;
}

int main(){
    std::ios::sync_with_stdio(0); cin.tie(0);
    ll n,m;
    cin >> n >> m;
    cout << powmod(n, m) << endl;
}


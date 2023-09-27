#include <bits/stdc++.h>

using namespace std;
using ull = unsigned long long;
using ll = long long;
using lli = long long int;
using ld = long double;
using pa = pair<int,int>;
using ppa = pair<pa,int>;
#define SORT(v, n) sort(v, v+n);
#define ALL(v) v.begin(),v.end()
#define VSORT(v) sort(ALL(v))
#define GRESORT(v) sort(ALL(v),greater<ll>())
#define REVERSE(v) reverse(ALL(v))
#define overlap(v) v.erase(unique(ALL(v)),v.end())
#define debug(x) cout << #x << ": " << x << endl
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,n) FOR(i,0,n)
#define RFOR(i,a,b) for(int i = (b-1); i >= a; i--)
#define rrep(i,n) RFOR(i,0,n)
#define INF INT_MAX
#define SUP INT_MIN
#define mins(a,b) a = min(a,b)
#define maxs(a,b) a = max(a,b)

//4??????
//int dy[]={0, 1, 0, -1};
//int dx[]={1, 0, -1, 0};

//8??????
//int dy[]={0,0,1,-1,1,1,-1,-1};
//int dx[]={1,-1,0,0,1,-1,1,-1};

const ll MOD = 1000000007;

ll pow_mod(ll a,ll b,ll mod){
    ll tmp = 1;
    a %= mod;
    if(b > 0){
        tmp = pow_mod(a, b/2, mod);
        if(b % 2) tmp = (((tmp*tmp)%mod)*a)%mod;
        else tmp = (tmp*tmp)%mod;
    }
    return tmp;
}

int mm = 1000000;
vector<bool> d(mm);

void hoge(){
    d[0] = d[1] = true;
    FOR(i,2,mm){
        if(d[i]) continue;
        for(int j = 2; i*j <= mm; j++){
            d[i*j] = true;
        }
    }
}

void solve() {
    vector<int> dp(mm,INF);
    int val;
    int m = 2;
    dp[0] = dp[1] = 0;
    hoge();
    while(cin >> val){
        if(dp[val] == INF){
            FOR(i,m,val+1){
                dp[i] = dp[i-1] + (!d[i] ? 1 : 0);
            }
            m = val;
        }
        cout << dp[val] << endl;
    }
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    solve();

    return 0;
}
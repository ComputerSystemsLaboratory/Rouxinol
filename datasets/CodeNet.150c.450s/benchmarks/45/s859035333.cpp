#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) for(int i=0;i < (n);i++)
#define ALL(obj) (obj).begin(),(obj).end()
#define SCANF(i) int i;scanf("%d",&i)
using namespace std;
using P = pair<int,int>;
const long long INF = 1LL << 60;
const int IINF=100000000;
const int MOD = (int)1e9 + 7;
typedef long long ll;
//約数列挙
vector<long long> divisor(long long n) {
    vector<long long> ret;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ret.push_back(i);
            if (i * i != n) ret.push_back(n / i);
        }
    }
    //sort(ret.begin(), ret.end()); // 昇順に並べる
    return ret;
}
vector<int> dx={1,0,-1,0};vector<int> dy={0,-1,0,1};

ll modpow(ll n,ll m,ll mod){
    ll res = 1;
    while(m>0){
        if(m & 1)res = res * n % mod;
        n = n * n % mod;
        m >>= 1;
    }
    return res;
};
signed main () {
    ll n,m;scanf("%lld %lld",&n,&m);ll mod = 1000000007;
    ll ans = modpow(n,m,mod);
    printf("%lld\n",ans);
}

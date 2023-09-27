#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) for(int i=0;i < (n);i++)
#define ALL(obj) (obj).begin(),(obj).end()
using namespace std;

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

signed main () {
    int n;scanf("%d",&n);
    vector<ll> list(n);
    vector<ll> dp(n,INF);
    REP(i,n){
        ll tmp;scanf("%lld",&tmp);
        list[i]=tmp;
    }
    FOR(i,0,n){
        *lower_bound(dp.begin(),dp.end(),list[i])=list[i];
    }
    cout << lower_bound(ALL(dp),INF) - dp.begin() << endl;
}

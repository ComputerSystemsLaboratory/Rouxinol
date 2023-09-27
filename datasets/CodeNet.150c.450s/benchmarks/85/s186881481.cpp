#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>
#include <map>
#include <queue>
#include <cmath>
#include <iomanip>
#include <set>
#include <functional>

#define MOD (1000000007)

using namespace std;

typedef long long ll;
typedef pair<ll, ll> tup;
const int MAX = 3000000;

long long fac[MAX], finv[MAX], inv[MAX];


ll modpow(ll a, ll n, ll mod) {
    ll res = 1;
    while (n > 0) {
        if (n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}


// テーブルを作る前処理
void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++){
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}

// 二項係数計算
long long COM(int n, int k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

map<ll,ll> prime;//素因数分解でそれぞれの素数がいくつ出てきたかを保存するmap

//O(√n)
//整列済み(mapはkeyで自動で整列される)
void prime_factorize(ll n){
    if(n<=1) return;
    ll l=sqrt(n);
   for(ll i=2;i<=(ll)(l);i++) { //
        if(n%i==0){
            prime_factorize(i);prime_factorize(ll(n/i));return;
        }
    }
    //mapでは存在しないkeyの場合も自動で構築される
    prime[n]++;return;
} 


int main() {
    ll n;
    cin >> n;

    vector<pair<ll, ll>> v;

    for(ll i = 0; i < n; i++) {
        ll r, c;
        cin >> r >> c;
        v.push_back(make_pair(r,c));
    }

    vector<vector<ll>> dp(n+1, vector<ll>(n+1, 999999999999999999));
    for(ll i = 0; i < n; i++) {
        dp[i][i+1] = 0;
    }
    for(ll i = 0; i < n-1; i++) {
        dp[i][i+2] = v[i].first * v[i].second * v[i+1].second;
    }

    for(ll diff = 3; diff <= n; diff++) {
        //cout << diff << endl;
        for(ll i = 0; i + diff <= n; i++) {
            //cout << "*** [" << i <<", " << i+diff << ")" << endl;
            for(ll after = i+1; after <= i+diff-1; after++) {
                // cout << "-> [" << i << ", " << after << ") + [" << after << ", " << i+diff << ")" << endl;
                // cout <<  dp[i][after] + dp[after][i+diff] + v[i].first * v[after-1].second * v[i+diff-1].second << endl;
                dp[i][i+diff] = min(dp[i][i+diff], dp[i][after] + dp[after][i+diff] + v[i].first * v[after-1].second * v[i+diff-1].second);
                //cout << "dp[" << i << "][" << i+diff << "] = " << dp[i][i+diff] << endl;
            }
        }
    }

    cout << dp[0][n] << endl;

    return 0;    
}




#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long ul;
// for文短縮類
#define REP(i, n) for (ll i = 0; i < (ll)(n); i++)
#define REPD(i, n) for (ll i = n - 1; i >= 0; i--)
#define FOR(i, a, b) for (ll i = a; i <= (ll)(b); i++)
#define FORD(i, a, b) for (ll i = a; i >= (ll)(b); i--)

// iteratorのbeginとendをまとめて渡す
#define ALL(x) (x).begin(), (x).end()
//略
#define PB push_back  // vectorヘの挿入
#define MP make_pair  // pairのコンストラクタ
#define F first       // pairの一つ目の要素
#define S second      // pairの二つ目の要素
//出力
#define COUT(x) cout << (x) << endl
#define SCOUT(x) cout << (x) << " "
#define ENDL cout << endl
/************ Combination wtih MOD ************
const int MAX = 510000;
const int MOD = 1000000007;
long long fac[MAX], finv[MAX], inv[MAX];
// preprocess for some tables
void COMinit() {
  fac[0] = fac[1] = 1;
  finv[0] = finv[1] = 1;
  inv[1] = 1;
  for (int i = 2; i < MAX; i++) {
    fac[i] = fac[i - 1] * i % MOD;
    inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD;
    finv[i] = finv[i - 1] * inv[i] % MOD;
  }
}
// combination
long long COM(int n, int k) {
  if (n < k) return 0;
  if (n < 0 || k < 0) return 0;
  return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

*******************************************************/

ll const MOD = 1000000007;
int main(int argc, char *argv[])
{
    // input高速化。cinとcoutの結合解除。scanfとprintfは使えない。
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    ll n, m;
    cin >> m >> n;

    ll ans = 1;

    while(n != 0){
        if(n & 1 == 1){
            ans *= m;
            ans %= MOD;
        }

        m *= m;
        m %= MOD;
        n >>= 1;
    }

    cout << ans << endl;

}

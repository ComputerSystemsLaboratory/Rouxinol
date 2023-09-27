#if 0

#endif
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <assert.h>
#include <complex>
#define REP(i,n) for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;
ll dp[50001];
ll n, m;
ll C[20];
void solve() {
    for (ll money = 1; money < n + 1; ++money) {
        ll min_coin = numeric_limits<ll>::max();
        for (ll coin_i = 0; coin_i < m; ++coin_i) {
            if (money < C[coin_i]) {
                continue;
            }
            min_coin = min(dp[money - C[coin_i]] + 1, min_coin);
        }
        dp[money] = min_coin;
    }
    cout << dp[n] << endl;
}
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    #define ll int

    cin >> n >> m;
    for (int mm = 0; mm < m; ++mm) {
        cin >> C[mm];
    }

    solve();

    return 0;
}

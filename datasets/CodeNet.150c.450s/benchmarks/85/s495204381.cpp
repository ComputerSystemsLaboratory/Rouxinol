#include <bits/stdc++.h>
 
#define rep(i,n) for(ll i=0;i<n;++i)
#define ALL(a) (a).begin(),(a).end()
 
using namespace std;
using ll  = long long;
using pll = pair<ll, ll>;
 
const ll MOD  = 1e9+7;
const ll LINF = 1LL << 60;
const int INF = 1e9 + 7;

int main(){
    int n;
    cin >> n;

    int len[n+1];
    rep(i, n)cin >> len[i] >> len[i+1];

    ll dp[105][105] = {};//lからrまで行列積の最小の乗算回数

    //連鎖行列積を求める数i
    for(int i = 2; i <= n; ++i){
        for(int l = 1; l+i-1 <= n; ++l){
            int r = i+l-1;
            dp[l][r] = INF;
            //(M_l*...*M_c)*(M_c+1*...*M_r)
            for(ll c = l; c < r; ++c){
                dp[l][r] = min(dp[l][r], dp[l][c] + dp[c+1][r] + len[l-1]*len[c]*len[r]);
            }
        }
    }

    cout << dp[1][n] << endl;
}

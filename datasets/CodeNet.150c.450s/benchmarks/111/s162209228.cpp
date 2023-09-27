#include <bits/stdc++.h>
using namespace std;
#define int long long   // <-----!!!!!!!!!!!!!!!!!!!

#define rep(i,n) for (int i=0;i<(n);i++)
#define rep2(i,a,b) for (int i=(a);i<(b);i++)
#define rrep(i,n) for (int i=(n)-1;i>=0;i--)
#define rrep2(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define all(a) (a).begin(),(a).end()

typedef long long ll;
typedef pair<int, int> P;
typedef tuple<int, int, int> TUPLE;
typedef vector<int> V;
typedef vector<V> VV;
typedef vector<VV> VVV;

signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int N;
    cin >> N;
    vector<int> a(N);
    rep(i, N) cin >> a[i];

    const int MAX = 21;
    vector<vector<int>> dp(N, vector<int>(MAX, 0));
    dp[0][a[0]] = 1;
    rep2(i, 1, N - 1) {
        rep(j, MAX) {
            if (j + a[i] < MAX) {
                dp[i][j + a[i]] += dp[i - 1][j];
            }
            if (j - a[i] >= 0) {
                dp[i][j - a[i]] += dp[i - 1][j];
            }
        }
    }

    cout << dp[N - 2][a[N - 1]] << endl;

}
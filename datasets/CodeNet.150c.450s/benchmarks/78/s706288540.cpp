#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define rrep(i, st, n) for (int i = st; i < n; ++i)
using pii = pair<int, int>;
const int mod = 1e9 + 7;
int dy[] = {0, 0, -1, 1, -1, 1, -1, 1};
int dx[] = {1, -1, 0, 0, -1, 1, 1, -1};
#define ceil(a, b) a / b + !!(a % b)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
int table[3000001];
int main() {
    cin.tie(0); ios::sync_with_stdio(false);
    int tetra[201];
    tetra[0] = 0;
    rrep(i, 1, 201) tetra[i] = i * (i + 1) * (i + 2) / 6;
    int dp[1000001];
    rep(i, 1000001) dp[i] = i;
    int dp2[1000001];
    rep(i, 1000001) dp2[i] = i;
    rep(i, 201) {
        rep(j, 1000001) {
            if (j + tetra[i] < 1000001) {
                chmin(dp[j + tetra[i]], dp[j] + 1);
                if (tetra[i] % 2 != 0) chmin(dp2[j + tetra[i]], dp2[j] + 1);
            }
        }
    }
    int n;
    while (cin >> n && n) {
        cout << dp[n] << " " << dp2[n] << endl;
    }
}


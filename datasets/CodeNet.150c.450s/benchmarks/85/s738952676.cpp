#include <bits/stdc++.h>
using namespace std;
#define repd(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) repd(i,0,n)
#define all(x) (x).begin(),(x).end()
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;
const long long INF = 1LL << 60;
typedef pair<int, int> P;
struct RC {
    int r, c;
};

int dp[101][101];
int main()
{
    int N;
    cin >> N;
    vector<RC> rc(N);
    rep(i, N) {
        int r, c;
        cin >> r >> c;
        rc[i] = {r, c};
    }

    vector<vector<int>> dp(N, vector<int>(N, 1e9));
    rep(i, N) dp[i][i] = 0;

    repd(w, 1, N) {
        rep(i, N - w) {
            int j = i + w;
            repd(k, i, j) {
                chmin(dp[i][j], dp[i][k] + dp[k + 1][j] + rc[i].r * rc[k].c * rc[j].c);
            }
        }
    }

    cout << dp[0][N - 1] << endl;
    return 0;
}

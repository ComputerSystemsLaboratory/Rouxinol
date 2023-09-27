#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)

#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

const int INF = 1<<29;        // 十分大きい値にする, INT_MAX にしないのはオーバーフロー対策

// 入力
int n;
string x,y;

// DPテーブル
int dp[1010][1010];

void printdp() {
    // cout << "--------------" << endl;
    // cout << "    ";
    // REP(i, y.size()+1) {
    //     cout << y[i-1] << "   ";
    // }
    // cout << endl;
    // REP(i, x.size() + 1) {
    //     cout << x[i-1] << ":";
    //     REP(j, y.size() + 1) {
    //         cout << setw(3) <<  (dp[i][j] == INF ? 9 : dp[i][j]) << " ";
    //     }
    //     cout << endl;
    // }
}


int main() {
    cin >> x >> y;

    memset(dp, 0, sizeof(dp));
    REP(i, x.size()+1) dp[i][0] = i;
    REP(i, y.size()+1) dp[0][i] = i;

    REP(j, x.size()+1) {
        REP(k, y.size()+1) {
            if(x[j] == y[k]) {
                dp[j+1][k+1] = dp[j][k];
            } else {
                dp[j+1][k+1] = min(
                    dp[j][k+1] + 1,
                    min(
                        dp[j+1][k] + 1,
                        dp[j][k] + 1)
                );
            }
        }

        printdp();
    }

    cout << dp[x.size()][y.size()] << endl;

}

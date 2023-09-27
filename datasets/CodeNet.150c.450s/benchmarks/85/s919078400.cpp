#include <bits/stdc++.h>

using namespace std;

#define Vi vector<int>
#define FOR(i,s,e) for (int i=s; i<e; i++)
#define ITER(v) v.begin(), v.end()

constexpr int N_MAX = 100;

int n;
int shape[N_MAX][2];
int dp[N_MAX][N_MAX];

int mcm() {
    FOR(d,0,n) {
        FOR(from,0,n-d) {
            int to = from + d;
            if (from == to) {
                dp[from][to] = 0;
            } else {
                int minval = -1;
                FOR(s,0,d) {
                    int cand = dp[from][from+s] + dp[from+s+1][to]
                        + shape[from][0] * shape[from+s][1] * shape[to][1];
                    if (minval == -1) {
                        minval = cand;
                    } else {
                        minval = min(cand, minval);
                    }
                }
                dp[from][to] = minval;
            }
        }
    }
    return dp[0][n-1];
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    FOR(i,0,n) {
        cin >> shape[i][0] >> shape[i][1];
    }
    cout << mcm() << endl;

    return 0;
}
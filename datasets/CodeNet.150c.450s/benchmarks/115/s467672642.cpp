#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int (i)=(0);(i)<(int)(n);++(i))
#define ALL(x) x.begin(),x.end()
typedef pair<int, int> P;
typedef long long ll;

int N;
string s,t;
int dp[1001][1001];

// int solve(int i, int j) {
//
//     if (dp[i][j] >= 0) {
//         return dp[i][j];
//     }
//
//     int res;
//     if (i >= n || j >= m) {
//         res = 0;
//     }
//     else if (s[i] == t[j]) {
//         res = solve(i+1, j+1) + 1;
//     }
//     else {
//         res = max(solve(i+1, j), solve(i, j+1));
//     }
//     return dp[i][j] = res;
// }

int main() {
    cin >> N;
    while (N--) {
        cin >> s >> t;
        int n = s.size(), m = t.size();
        fill(dp[0], dp[1001], 0);
        for (int i=0;i<n;++i) {
            for (int j=0;j<m;++j) {
                if (s[i] == t[j]) {
                    dp[i+1][j+1] = dp[i][j] + 1;
                }
                else {
                    dp[i+1][j+1] = max(dp[i+1][j], dp[i][j+1]);
                }
            }
        }
        cout << dp[n][m] << endl;
    }
}
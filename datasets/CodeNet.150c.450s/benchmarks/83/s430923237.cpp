#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

const int MAXN = 101;
const int MAXW = 10001;

int main() {
    int N, W;
    vector<int> v(MAXN);
    vector<int> w(MAXN);
    vector<vector<int> > dp(MAXN, vector<int>(MAXW, 0));
    scanf("%d %d", &N, &W);
    for (int i = 0; i < N; ++i) {
        scanf("%d %d", &v[i], &w[i]);
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= W; j++) {
            if (j < w[i]) { dp[i + 1][j] = dp[i][j]; }
            else { dp[i + 1][j] = max(dp[i][j], dp[i][j - w[i]] + v[i]); }
        }
    }
    

    printf("%d\n", dp[N][W]);
}
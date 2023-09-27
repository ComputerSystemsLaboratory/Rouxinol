#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i < (int)(n); i++)
using ull = unsigned long long;
using ll = long long;

const int INF = 1000010;

int MCMP(int N, int R[], int C[]) {
    int dp[N][N];
    rep(i, N) rep(j, N) {
        if (i==j) dp[i][j] = 0;
        else dp[i][j] = INF;
    }
    for (int len=0; len<=N; len++) {
        for (int s=0; s+len<N; s++) {
            int left = s, right = s+len;
            for (int mid=left; mid<right; mid++) {
                int lmr_num;
                lmr_num = dp[left][mid] + dp[mid+1][right] + R[left] * C[mid] * C[right];
                dp[left][right] = min(dp[left][right], lmr_num);
                // cout << " " << left << " " << right << " " << mid << " " << dp[left][right] << endl;
            }
        }
    }
    return dp[0][N-1];
}


int main() {
    int N;
    cin >> N;

    int R[N], C[N];
    rep(i, N) cin >> R[i] >> C[i];

    cout << MCMP(N, R, C) << endl;

    return 0;
}



#include <iostream>
#include <vector>

using namespace std;

const int MAX_M = 20, MAX_N = 50000;
const int INF = 1<<28;

int N, M;
int C[MAX_M];
int main() {
    cin >> N >> M;
    for (int i = 0; i < M; i++) cin >> C[i];

    vector<int> dp(N + 1, INF);
    dp[0] = 0;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j + C[i] <= N; j++) {
            if (dp[j] < INF) dp[j + C[i]] = min(dp[j + C[i]], dp[j] + 1);
        }
    }
    cout << dp[N] << endl;
    return 0;
}
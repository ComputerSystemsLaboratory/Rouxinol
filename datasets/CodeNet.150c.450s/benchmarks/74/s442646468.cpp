#include <iostream>
#include <vector>

using namespace std;

const int INF = 1<<28;

int Count(const vector<int>& C, int N) {
    vector<int> dp(N + 1, INF);
    dp[0] = 0;
    for (int i = 0; i < C.size(); i++)
        for (int j = 0; j + C[i] <= N; j++)
            if (dp[j] < INF) dp[j + C[i]] = min(dp[j + C[i]], dp[j] + 1);
    return dp[N];
}

int N, M;
int main() {
    cin >> N >> M;
    vector<int> C(M);
    for (int i = 0; i < M; i++) cin >> C[i];
    cout << Count(C, N) << endl;
    return 0;
}
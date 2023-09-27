#include <iostream>
#include <vector>

using namespace std;

const int INF = 1<<28;
int LevenshteinDistance(const string& s, const string& t) {
    const int N = s.size(), M = t.size();
    vector< vector<int> > dp(N + 1, vector<int>(M + 1, INF));
    for (int i = 0; i < N; i++) dp[i][0] = i;
    for (int j = 0; j < M; j++) dp[0][j] = j;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            int& v = dp[i][j];
            v = min(v, dp[i - 1][j] + 1);
            v = min(v, dp[i][j - 1] + 1);
            v = min(v, dp[i - 1][j - 1] + (s[i - 1] != t[j - 1]));
        }
    }
    return dp[N][M];
}

int main() {
    string s, t; cin >> s >> t;
    cout << LevenshteinDistance(s, t) << endl;
    return 0;
}
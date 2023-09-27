#include <iostream>
#include <vector>

using namespace std;

int Max(const vector<int>& v, const vector<int>& w, int W) {
    vector<int> dp(W + 1, 0);
    for (int i = 0; i < v.size(); i++) {
        for (int j = W; j - w[i] >= 0; j--) {
            dp[j] = max(dp[j], dp[j - 1]);
            dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
        }
    }
    return dp[W];
}

int main() {
    int N, W;
    cin >> N >> W;
    vector<int> v(N), w(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i] >> w[i];
    }
    cout << Max(v, w, W) << endl;
    return 0;
}
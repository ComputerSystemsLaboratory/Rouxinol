#include <iostream>
#include <cstring>

using namespace std;

int memo[100][10001];
int value[100];
int weight[100];
int NEGA_INF = -10000000;

int dp(int k, int w) {
    if (w < 0) { return NEGA_INF; }
    if (k == -1 || w < 0) { return 0; }
    if (memo[k][w] != -1) { return memo[k][w]; }
    return memo[k][w] = max(
            dp(k - 1, w - weight[k]) + value[k],
            dp(k - 1, w));
}

int main() {
    int n, w;
    cin >> n >> w;
    for (int i = 0; i < n; ++i) {
        cin >> value[i] >> weight[i];
    }
    memset(memo, -1, sizeof(memo));
    cout << dp(n - 1, w) << endl;
}
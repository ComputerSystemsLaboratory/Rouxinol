#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>

using namespace std;
using ll = long long;
const ll INF = 1e9;

int main() {
    int N, A;
    cin >> N;
    N--;
    int v[N];
    for (int i = 0; i < N; i++) cin >> v[i];
    cin >> A;
    ll dp[N][21];
    for (int i = 0; i < N; i++) for (int j = 0; j < 21; j++) dp[i][j] = 0;

    dp[0][v[0]] = 1;
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < 21; j++) {
            if (j + v[i+1] <= 20) {
                dp[i+1][j+v[i+1]] += dp[i][j];
            }
            if (j - v[i+1] >= 0) {
                dp[i+1][j-v[i+1]] += dp[i][j];
            }
        }
    }

    cout << dp[N-1][A] << endl;

    return 0;
}
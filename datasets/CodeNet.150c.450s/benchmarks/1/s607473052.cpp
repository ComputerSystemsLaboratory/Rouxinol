/**
 * Combinatorial - Longest Increasing Subsequence
 */

#include <iostream>

using namespace std;

const int INF = 1 << 30;

int main() {

    int N;
    int A[100000];

    cin >> N;

    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        A[i] = a;
    }

    int dp[100001];
    fill(dp, dp + 100001, INF);
    dp[0] = -1;

    for (int i = 0; i < N; i++) {
        *lower_bound(dp, dp + N + 1, A[i]) = A[i];
    }

    cout << lower_bound(dp, dp + N + 1, INF) - dp - 1 << endl;
}
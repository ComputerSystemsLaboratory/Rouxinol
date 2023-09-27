#include <bits/stdc++.h>
using namespace std;

constexpr int INF = 1 << 30;

int N, A[100009];
int dp[100009];

int main() {
    cin >> N;
    for(int i = 0; i < N; i++)
        cin >> A[i];

    fill(dp, dp + N, INF);

    for(int i = 0; i < N; i++)
        *lower_bound(dp, dp + N, A[i]) = A[i];

    cout << lower_bound(dp, dp + N, INF) - dp << endl;

    return 0;
}

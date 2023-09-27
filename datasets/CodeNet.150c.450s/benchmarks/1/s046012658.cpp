#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL << 60;

vector<int> dp(100010, 0);

int main() {
    int n;
    cin >> n;
    vector<int> A(n + 1);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &A[i]);
    }

    int l = 1;
    dp[1] = A[1];
    for (int i = 2; i <= n; i++) {
        if (dp[l] < A[i]) {
            dp[++l] = A[i];
        } else {
            auto itr = lower_bound(dp.begin() + 1, dp.begin() + l + 1, A[i]);
            *itr = A[i];
        }
    }

    cout << l << endl;

    return 0;
}

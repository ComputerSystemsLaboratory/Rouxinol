#include <bits/stdc++.h>
using namespace std;

int dp[1000010];

int main() {
    int n, q;
    cin >> n;
    vector<int> a(n);
    dp[0] = 1;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        for (int j = 1000000; j >= a[i]; --j) {
            dp[j] |= dp[j - a[i]];
        }
    }
    cin >> q;
    for (int i = 0; i < q; ++i) {
        int m;
        cin >> m;
        cout << (dp[m] ? "yes\n" : "no\n");
    }
    return 0;
}
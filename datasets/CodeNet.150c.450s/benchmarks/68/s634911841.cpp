#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    while (cin >> n) {
        if (n == 0) break;
        vector<int> a(n);
        rep(i, n) cin >> a[i];
        sort(a.begin(), a.end());
        int ans = a[1] - a[0];
        rep(i, n) if (i) ans = min(ans, a[i] - a[i - 1]);
        cout << ans << endl;
    }
}
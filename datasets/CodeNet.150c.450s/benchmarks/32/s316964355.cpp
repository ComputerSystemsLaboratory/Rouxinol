#include <bits/stdc++.h>
using namespace std;

int main() {
    int p, n, m;
    while (cin >> p >> n >> m, n || m || p) {
        vector<int> v(p);
        for (auto& i : v) cin >> i;
        int ans, Max = -1;
        for (int i = n; i <= m; i++) {
            if (Max <= v[i-1] - v[i]) {
                ans = i;
                Max = v[i-1] - v[i];
            }
        }

        cout << ans << endl;
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
using P = pair<int, int>;

int main() {
    while (1) {
        int n, m;
        cin >> n >> m;
        if (!n) return 0;
        int l[12] = {};
        for (int i = 0; i < n; ++i) {
            int d, p;
            cin >> d >> p;
            l[p] += d;
        }
        int ans = 0;
        for (int i = 11; i >= 0; --i) {
            ans += i * max(l[i] - m, 0);
            m = max(m - l[i], 0);
        }
        cout << ans << "\n";
    }
}


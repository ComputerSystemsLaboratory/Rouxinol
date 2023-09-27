#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) repi(i, 0, n)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)

int main() {
    int m,n_min,n_max;
    while (true) {
        cin >> m >> n_min >> n_max;
        if (m == 0 && n_min == 0 && n_max == 0) {
            break;
        }
        vector<int> P(m);
        rep(i, m) {
            cin >> P[i];
        }
        int diff = 0;
        int ans = 0;
        repi(i, n_min, n_max+1) {
            if ( (P[i-1] - P[i]) >=  diff) {
                diff = P[i-1] - P[i];
                ans = i;
            }
        }
        cout << ans << endl;
    }
}

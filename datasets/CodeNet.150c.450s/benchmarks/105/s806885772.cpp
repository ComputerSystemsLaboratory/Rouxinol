#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

using LL = long long;
const int B = 61;

signed main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<LL> a(n);
        for (auto &x : a) cin >> x;
        string s;
        cin >> s;
        vector<LL> b(B + 1);
        int ans = 0;
        for (int i = n - 1; ~i; i--) {
            LL now = a[i];
            for (int j = B; ~j; j--) {
                if (((now >> j) & 1) == 0) continue;
                if (!b[j]) {
                    b[j] = now;
                    break;
                }
                now ^= b[j];
            }
            if (s[i] == '1') {
                if (now) {
                    ans = 1;
                    break;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}
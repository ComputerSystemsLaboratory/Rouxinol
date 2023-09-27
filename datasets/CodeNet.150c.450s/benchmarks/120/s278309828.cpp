#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// Welcome to my source code!

const int INF = 1e9;

int main() {
    int r, c;
    while (cin >> r >> c && r && c) {
        string a[r];
        for (int i = 0; i < r; i++) for (int j = 0, k; j < c; j++) {
            cin >> k;
            a[i] += to_string(k);
        }
        ll ans = 0;
        for (int bit = 0; bit < (1 << r); bit++) {
            ll sum = 0;
            for (int j = 0; j < c; j++) {
                ll cnt = 0;
                for (int i = 0; i < r; i++) {
                    if ((bit & (1 << i)) && (a[i][j] == '0')) cnt++;
                    else if (!(bit & (1 << i)) && (a[i][j] == '1')) cnt++;
                }
                sum += max(cnt, r - cnt);
            }
            ans = max(ans, sum);
        }
        cout << ans << endl;
    }
}

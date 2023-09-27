#include <bits/stdc++.h>
using namespace std;

#define dump(x) cout << (x) << '\n'
#define Int int64_t
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()

Int INF = 1e18;
int inf = 1e9;
Int mod = 1e9+7;

int main() {
    vector<int> res;
    while (true) {
        int n;
        cin >> n;
        if (n == 0) break;
        vector<int> h(n * 2), m(n * 2), s(n * 2);
        for (int i = 0; i < n * 2; i++) {
            char a, b;
            cin >> h[i] >> a >> m[i] >> b >> s[i];
        }
        vector<int> time(24 * 60 * 60 + 1, 0);
        for (int i = 0; i < n * 2; i++) {
            int sec = h[i] * 3600 + m[i] * 60 + s[i];
            if (i % 2 == 0) {
                time[max(sec, 0)]++;
            }
            else {
                time[min(sec, 24 * 60 * 60)]--;
            }
        }
        for (int i = 0; i < 24 * 60 * 60; i++) {
            time[i + 1] += time[i];
        }
        int ma = -1;
        for (int i = 0; i < 24 * 60 * 60; i++) {
            if (ma < time[i]) {
                ma = time[i];
            }
        }
        res.push_back(ma);
    }
    for (int i = 0; i < (int)res.size(); i++) {
        dump(res[i]);
    }
    return 0;
}


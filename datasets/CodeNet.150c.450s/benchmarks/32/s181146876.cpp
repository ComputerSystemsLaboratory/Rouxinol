#include <bits/stdc++.h>
using namespace std;
#define dump(x) cout << (x) << '\n';
typedef int64_t Int;
Int mod = 1e9+7;
Int INF = 1e9+7;

int main() {
    while (true) {
        Int m, nmin, nmax;
        cin >> m >> nmin >> nmax;
        if (m == 0) break;
        vector<Int> p(m + 1);
        for (Int i = 1; i <= m; i++) {
            cin >> p[i];
        }
        Int ma = -1e9;
        Int index = 1;
        for (Int i = nmin; i <= nmax; i++) {
            if (p[i] - p[i + 1] >= ma) {
                ma = p[i] - p[i + 1];
                index = i;
            }
        }
        dump(index);
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, nmin, nmax;
    while (cin >> n >> nmin >> nmax, n || nmin || nmax) {
        vector<int> p(n);
        for (auto& i : p) cin >> i;

        int ans = 0, c = 0;
        for (int i = nmin; i <= nmax; i++) {
            if (c <= p[i-1] - p[i]) {
                ans = i;
                c = p[i-1] - p[i];
            }
        }

        cout << ans << endl;
    }

    return 0;
}


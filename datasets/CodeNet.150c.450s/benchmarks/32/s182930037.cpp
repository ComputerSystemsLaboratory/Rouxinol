#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, nmin, nmax;
    while (cin >> n >> nmin >> nmax, n) {
        vector<int> P(n);
        for (int i = 0; i < n; ++i) cin >> P[i];

        int diff = 0;
        int res = -1;
        for (int i = nmin - 1; i <= nmax - 1; ++i) {
            if (diff <= P[i] - P[i + 1]) {
                diff = P[i] - P[i + 1];
                res = i + 1;
            }
        }
        cout << res << endl;
    }
    return 0;
}

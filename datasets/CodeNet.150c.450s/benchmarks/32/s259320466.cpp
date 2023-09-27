#include <bits/stdc++.h>
using namespace std;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int m, nmin, nmax;
    while (cin >> m >> nmin >> nmax, m||nmin||nmax) {
        vector<int> P(m);
        for (int i = 0; i < m; i++) cin >> P[i];

        int max_gap = -1;
        int ans_n = 0;
        for (int i = nmin; i <= nmax; i++) {
            int gap = P[i-1] - P[i];
            if (gap >= max_gap) {
                max_gap = gap;
                ans_n = i;
            }
        }

        cout << ans_n << endl;
    }

    return 0;
}
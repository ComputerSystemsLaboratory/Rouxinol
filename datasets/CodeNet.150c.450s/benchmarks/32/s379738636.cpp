#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, nmin, nmax;
    while(cin >> m >> nmin >> nmax, m) {
        vector<int> p(m);
        for(int i = 0; i < m; ++i) {
            cin >> p[i];
        }
        sort(rbegin(p), rend(p));
        int val = 0;
        int ans = 0;
        for(int i = nmin - 1; i < nmax; ++i) {
            if(val <= p[i] - p[i + 1]) {
                val = p[i] - p[i + 1];
                ans = i + 1;
            }
        }

        cout << ans << endl;
    }
}


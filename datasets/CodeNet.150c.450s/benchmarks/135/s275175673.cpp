#include <bits/stdc++.h>
using namespace std;

int main() {
    while (true) {
        int n, m;
        scanf("%d %d", &n, &m);
        if (n == 0 && m == 0) break;
        vector<int> N(1500001);
        vector<int> M(1500001);
        vector<int> h(n);
        vector<int> w(m);
        for (int i = 0; i < n; ++i) {
            scanf("%d", &h[i]);
        }

        for (int i = 0; i < m; ++i) {
            scanf("%d", &w[i]);
        }
        for (int i = 0; i < n; ++i) {
            int s = 0;
            for (int j = i; j < n; ++j) {
                s += h[j];
                N[s]++;
            }
        }
        for (int i = 0; i < m; ++i) {
            int s = 0;
            for (int j = i; j < m; ++j) {
                s += w[j];
                M[s]++;
            }
        }
        int c = 0;
        for (int i = 0; i < 1500001; ++i) {
            c += N[i]*M[i];
        }
        cout << c << endl;
    }
}
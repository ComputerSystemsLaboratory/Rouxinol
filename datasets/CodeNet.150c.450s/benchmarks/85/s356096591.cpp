#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main() {
    int n;
    scanf("%d", &n);
    vector<int> p(n+1);
    rep(i, n) {
        int r, c;
        scanf("%d %d", &r, &c);
        if (i == 0) p[i] = r;
        p[i+1] = c;
    }

    int m[n+1][n+1];
    for (int i = 1; i <= n; i++) {
        m[i][i] = 0;
    }
    for (int l = 2; l <= n; l++) {
        for (int i = 1; i <= n - l + 1; i++) {
            int j = i + l - 1;
            int MIN;
            for (int k = i; k < j; k++) {
                if (k == i) MIN = m[i][k] + m[k+1][j] + p[i-1] * p[k] * p[j];
                else MIN = min(MIN, m[i][k] + m[k+1][j] + p[i-1] * p[k] * p[j]);
            }
            m[i][j] = MIN;
        }
    }
    printf("%d\n", m[1][n]);
}

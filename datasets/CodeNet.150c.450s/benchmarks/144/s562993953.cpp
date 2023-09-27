// @author: arch_

#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < n; i++)

array<array<long, 100 + 1>, 100> a, b, c;

int main(void) {
    int n, m, l;
    cin >> n >> m >> l;
    REP(i, n) REP(j, m) cin >> a[i][j];
    REP(i, m) REP(j, l) cin >> b[i][j];
    REP(i, n) REP(j, m) REP(k, l) c[i][k] += a[i][j] * b[j][k];
    REP(i, n) REP(j, l) cout << c[i][j] << (j < l - 1 ? ' ' : '\n');
    return 0;
}
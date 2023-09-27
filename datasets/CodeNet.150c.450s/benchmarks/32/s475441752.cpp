//https://onlinejudge.u-aizu.ac.jp/challenges/sources/ICPC/Prelim/1600?year=2015

#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, n_min, n_max;

    while (cin >> m >> n_min >> n_max, m | n_min | n_max) {
        vector<int> a(m);
        for (int i = 0; i < m; ++i) {
            cin >> a[i];
        }

        int ans = 0;
        int gap = 0;
        for (int k = n_min; k <= n_max; ++k) {
            if (a[k - 1] - a[k] >= gap) {
                gap = a[k - 1] - a[k];
                ans = k;
            }
        }
        cout << ans << endl;
    }

    return 0;
}

/*
 * 「k人受かる」＝「n-k人落ちる」なので，
 * 合格者の最低点はa[k-1]。
 * 不合格者の最高点はa[k]，
 * これらの差が最大になる場合を調べる。
 *
 */

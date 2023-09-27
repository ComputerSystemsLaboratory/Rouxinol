//https://onlinejudge.u-aizu.ac.jp/challenges/sources/ICPC/Prelim/1608?year=2016

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    while (cin >> n, n) {
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        auto ans = (int) 1e9;
        for (int i = 0; i < n - 1; ++i) {
            ans = min(ans, a[i + 1] - a[i]);
        }

        cout << ans << endl;
    }

    return 0;
}

/*
 *
 */

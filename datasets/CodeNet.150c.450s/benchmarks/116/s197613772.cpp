//https://onlinejudge.u-aizu.ac.jp/challenges/sources/JOI/Final/0516?year=2007

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;

    while (cin >> n >> k, n | k) {
        vector<int> a((unsigned) n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int s = accumulate(a.begin(), a.begin() + k, 0);
        int ans = s;
        for (int i = k; i < n; ++i) {
            s += a[i] - a[i - k];
            ans = max(ans, s);
        }

        cout << ans << endl;
    }
    return 0;
}

/*
 *
 */

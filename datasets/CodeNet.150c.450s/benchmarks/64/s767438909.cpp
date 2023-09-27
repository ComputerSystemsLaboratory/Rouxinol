#include <bits/stdc++.h>
using namespace std;

int ok[1000000];

int main() {
    int n, q;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < (1 << n); ++i) {
        int sum = 0;
        for (int j = 0; j < n; ++j) {
            if ((i >> j) & 1) {
                sum += a[j];
            }
        }
        ok[sum] = 1;
    }
    cin >> q;
    for (int i = 0; i < q; ++i) {
        int m;
        cin >> m;
        cout << (ok[m] ? "yes\n" : "no\n");
    }
    return 0;
}
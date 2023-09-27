#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, w[100010];
    cin >> n >> k;
    int ma = 0;
    for (int i = 0; i < n; ++i) {
        cin >> w[i];
        ma = max(ma, w[i]);
    }
    int ok = 1000000007, ng = ma - 1;
    while (ok > ng + 1) {
        int m = (ok + ng) / 2;
        int cnt = 0, rem = 0;
        for (int i = 0; i < n; ++i) {
            if (rem < w[i]) {
                ++cnt;
                rem = m - w[i];
            }
            else {
                rem -= w[i];
            }
        }
        if (cnt <= k) {
            ok = m;
        }
        else {
            ng = m;
        }
    }
    cout << ok << "\n";
    return 0;
}
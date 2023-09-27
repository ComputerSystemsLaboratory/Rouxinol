#include <bits/stdc++.h>
typedef long long lint;
using namespace std;

int n;

int calc(int x, int y, int z) {
    return x * x + y * y + z * z + x * y + y * z + z * x;
}

int main() {
    cin >> n;
    vector<int> ans(n + 1, 0);
    for (int x = 1; x <= n; x++) {
        for (int y = 1; y <= n; y++) {
            for (int z = 1; z < n; z++) {
                int t = calc(x, y, z);
                if (t > n) {
                    break;
                }
                ans[t] += 1;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << ans[i] << endl;
    }
}
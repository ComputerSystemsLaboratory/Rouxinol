#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, p;
    while (cin >> x >> y >> p, x || y || p) {
        int ans = 0;
        for (int i = 1; i < 1000; i++) {
            for (int j = i; j < 1000; j++) {
                int pre = i * (100 + x) / 100 + j * (100 + x) / 100;
                if (pre == p) {
                    ans = max(ans, i * (100 + y) / 100 + j * (100 + y) / 100);
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}


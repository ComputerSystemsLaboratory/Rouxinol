#include "bits/stdc++.h"
using namespace std;

int main() {
        int i, j;
        int x, y, s;
        while (cin >> x >> y >> s) {
                if (x == 0 && y == 0 && s == 0) break;
                int ans = -1;
                for (i = 1; i < s - 1; i ++) {
                        for (j = 1; j < s - 1; j ++) {
                                int ii = (i * (100 + x)) / 100;
                                int jj = (j * (100 + x)) / 100;
                                if (ii + jj == s) {
                                        int res = (i * (100 + y)) / 100;
                                        res += (j * (100 + y)) / 100;
                                        ans = max(ans, res);
                                }
                        }
                }
                cout << ans << endl;
        }
        return 0;
}
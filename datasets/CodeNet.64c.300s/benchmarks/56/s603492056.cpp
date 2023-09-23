#include "bits/stdc++.h"
using namespace std;

int get(int y, int m, int d) {
        int ans = 0;
        int dai = (y - 1) / 3;
        ans += dai * 200;
        ans += (y - 1 - dai) * 195;
        if (y % 3 == 0) {
                ans += 20 * (m - 1);
                ans += d;
        } else {
                if (m == 1) {
                        ans += d;
                } else if (m == 2) {
                        ans += 20;
                        ans += d;
                } else if (m == 3) {
                        ans += 39;
                        ans += d;
                } else if (m == 4) {
                        ans += 59;
                        ans += d;
                } else if (m == 5) {
                        ans += 78;
                        ans += d;
                } else if (m == 6) {
                        ans += 98;
                        ans += d;
                } else if (m == 7) {
                        ans += 117;
                        ans += d;
                } else if (m == 8) {
                        ans += 137;
                        ans += d;
                } else if (m == 9) {
                        ans += 156;
                        ans += d;
                } else if (m == 10) {
                        ans += 176;
                        ans += d;
                }
        }
        return ans;
}

int main() {
        int i, j;
        int n;
        cin >> n;
        int b = get(1000, 1, 1);
        while (n --) {
                int ans = 0;
                int y, m, d;
                cin >> y >> m >> d;
                int a = get(y, m, d);
                cout << b - a << endl;
        }
        return 0;
}
#include <bits/stdc++.h>
using namespace std;

int H;
int a[10][5];

int main() {
    while (cin >> H, H) {
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < 5; j++) {
                cin >> a[i][j];
            }
        }
        bool update = true;
        int ans = 0;
        while (update) {
            update = false;
            for (int i = 0; i < H; i++) {
                int l = 0, r = 0;
                while (l < 5) {
                    while (r < 5 && a[i][r] == a[i][l]) {
                        r++;
                    }
                    if (a[i][l] && r - l >= 3) {
                        ans += (r - l) * a[i][l];
                        for (int j = l; j < r; j++) {
                            a[i][j] = 0;
                        }
                        update = true;
                    }
                    l = r;
                }
            }
            for (int j = 0; j < 5; j++) {
                vector<int> tmp;
                for (int i = H - 1; i >= 0; i--) {
                    if (a[i][j]) {
                        tmp.emplace_back(a[i][j]);
                    }
                    a[i][j] = 0;
                }
                for (int i = 0; i < (int)tmp.size(); i++) {
                    a[H - 1 - i][j] = tmp[i];
                }
            }
        }
        cout << ans << endl;
    }
}

#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int (i)=(0);(i)<(int)(n);++(i))
using ll = long long;

int main() {

    int n;
    while (cin >> n, n) {
        int x[202], y[202];
        int dx[] = { -1, 0, 1, 0 };
        int dy[] = { 0, 1, 0, -1 };
        x[0] = y[0] = 0;
        rep(i, n-1) {
            int a, b;
            cin >> a >> b;
            x[i+1] = x[a] + dx[b];
            y[i+1] = y[a] + dy[b];
        }

        int ma_x = 0, mi_x = 1e8, ma_y = 0, mi_y = 1e8;
        rep(i, n) {
            ma_x = max(ma_x, x[i]);
            mi_x = min(mi_x, x[i]);
            ma_y = max(ma_y, y[i]);
            mi_y = min(mi_y, y[i]);
        }
        cout << ma_x-mi_x+1 << " " << ma_y-mi_y+1 << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n, n) {
        vector<vector<int> > g(21, vector<int>(21));
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            g[x][y] += 1;
        }

        int r;
        cin >> r;
        int x = 10;
        int y = 10;
        int sum = 0;
        while (r--) {
            char d;
            int c;
            cin >> d >> c;
            int dx = 0;
            int dy = 0;

            if (d == 'N') dy++;
            if (d == 'S') dy--;
            if (d == 'E') dx++;
            if (d == 'W') dx--;

            for (int i = 0; i < c; i++) {
                x += dx;
                y += dy;

                if (g[x][y] > 0) {
                    sum += g[x][y];
                    g[x][y] = 0;
                }
            }
        }

        if (n == sum) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}


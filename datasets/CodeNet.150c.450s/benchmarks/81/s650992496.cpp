#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    while (cin >> n, n) {
        int g[10][10];
        for (int i = 0; i < 10; i++) {
            fill(g[i], g[i]+10, 1010001000);
        }
        for (int i = 0; i < n; i++) {
            int a, b, c;
            cin >> a >> b >> c;
            g[a][b] = c;
            g[b][a] = c;
        }
        for (int k = 0; k < 10; k++) {
            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10; j++) {
                    g[i][j] = min(g[i][j], 
                            g[i][k] + g[k][j]);
                }
            }
        }
        int ans = 0, max = 1010001000;
        for (int i = 0; i < 10; i++) {
            int sum = 0;
            bool fl = false;
            for (int j = 0; j < 10; j++) {
                if (i == j) {
                    continue;
                }
                if (g[i][j] != 1010001000) {
                    fl = true;
                    sum += g[i][j];
                }
            }
            if (fl && max > sum) {
                max = sum;
                ans = i;
            }
        }
        cout << ans << " " << max << endl;
    }
    return 0;
}
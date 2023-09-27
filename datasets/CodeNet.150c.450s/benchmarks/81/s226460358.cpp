#include <iostream>
#include <cstdio>
#include <algorithm>
#include <queue>
#include <map>
#include <string>
#include <sstream>
#include <set>
#include <bitset>
#include <cmath>
using namespace std;

const int maxv = 10 + 5, INF = 0x3f3f3f3f;

int n, d[maxv][maxv];

int main() {
    while (cin >> n && n) {
        for (int i = 0; i < maxv; ++i)
            for (int j = 0; j < maxv; ++j)
                d[i][j] = (i == j ? 0 : INF);
        int V = 0;
        for (int i = 1; i <= n; ++i) {
            int a, b, c; cin >> a >> b >> c;
            d[a][b] = d[b][a] = c;
            V = max(V, max(a, b));
        }
        for (int k = 0; k <= V; ++k)
            for (int i = 0; i <= V; ++i)
                for (int j = 0; j <= V; ++j)
                    d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
        int ans = INF, loc;
        for (int i = 0; i <= V; ++i) {
            int sum = 0;
            for (int j = 0; j <= V; ++j) {
                if (i == j) continue;
                else sum += d[i][j];
            }
            if (sum < ans) { ans = sum; loc = i; }
        }
        cout << loc << ' ' << ans << endl;
    }
    return 0;
}

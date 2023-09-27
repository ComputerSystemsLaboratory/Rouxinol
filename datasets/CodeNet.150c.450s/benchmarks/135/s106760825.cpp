//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

int h[1501];
int w[1501];

int table[1500*1500+1];

auto main() -> signed {
    int n, m;
    while(cin>>n>>m, n) {
        fill(h, h+1501, 0);
        fill(w, w+1501, 0);
        fill(table, table+1500*1500+1, 0);

        for(int i=1; i<=n; ++i) {
            cin >> h[i];
            h[i] += h[i-1];
        }

        for(int i=1; i<=m; ++i) {
            cin >> w[i];
            w[i] += w[i-1];
        }

        for(int i=0; i<=n; ++i) {
            for(int j=i+1; j<=n; ++j) {
                table[h[j]-h[i]]++;
            }
        }

        int ans = 0;
        for(int i=0; i<=m; ++i) {
            for(int j=i+1; j<=m; ++j) ans += table[w[j]-w[i]];
        }
        cout << ans << endl;
    }
    return 0;
}
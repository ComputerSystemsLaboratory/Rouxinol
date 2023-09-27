//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

int field[1500001] = {0};
signed main()
{
    int n, m;
    while(cin>>n>>m, n) {
        for(int i=0; i<1500000; ++i) field[i] = 0;
        vector<int> h(n+1);
        vector<int> w(m+1);
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
                field[h[j]-h[i]]++;
            }
        }
        int ans = 0;
        for(int i=0; i<=m; ++i) {
            for(int j=i+1; j<=m; ++j) ans += field[w[j]-w[i]];
        }
        cout << ans << endl;
    }
    return 0;
}
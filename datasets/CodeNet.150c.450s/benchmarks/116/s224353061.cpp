#include <bits/stdc++.h>

using namespace std;

#define rep(i,x) for(int i=0;i<x;++i)
#define all(a) begin(a),end(a)

signed main()
{
    int n, k;
    
    static int a[100010], sum[100010];

    while (cin >> n >> k, n) {
        rep(i, n) cin >> a[i];

        for (int i = 0; i < n; ++i) sum[i + 1] = a[i] + sum[i];

        int ma = -1e9;

        rep(i, n - k + 1) {
            ma = max(ma, sum[i + k] - sum[i]);
        }

        cout << ma << endl;
    }
}
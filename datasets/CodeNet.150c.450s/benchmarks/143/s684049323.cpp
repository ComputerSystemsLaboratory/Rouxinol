#include <bits/stdc++.h>
#define in(x) freopen(x, "r", stdin)
#define out(x) freopen(x, "w", stdout)
using namespace std;

long long cnt[(int)(1e5 + 500)];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
                
    #ifndef _LOCAL          
    #endif // _LOCAL

    int n;
    long long ans = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        ans += x;
        ++cnt[x];
    }

    int q;
    cin >> q;
    while (q--) {
        long long b, c;
        cin >> b >> c;

        ans += cnt[b] * (c - b);
        cnt[c] += cnt[b];
        cnt[b] = 0;

        cout << ans << "\n";
    }

    return 0;
}
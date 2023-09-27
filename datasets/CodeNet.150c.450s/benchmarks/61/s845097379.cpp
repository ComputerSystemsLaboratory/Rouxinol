#include <bits/stdc++.h>
using namespace std;
#define int long long   // <-----!!!!!!!!!!!!!!!!!!!

#define rep(i,n) for (int i=0;i<(n);i++)
#define rep2(i,a,b) for (int i=(a);i<(b);i++)
#define rrep(i,n) for (int i=(n)-1;i>=0;i--)
#define rrep2(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define all(a) (a).begin(),(a).end()

typedef long long ll;
typedef pair<int, int> P;

signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n, a, b, c, x;
    while (cin >> n >> a >> b >> c >> x, n) {
        vector<int> y(n);
        rep(i, n) cin >> y[i];

        int pos = 0;
        rep(ans, 10000 + 1) {
            if (y[pos] == x) {
                pos++;
            }
            if (pos == n) {
                cout << ans << endl;
                break;
            }
            if (ans == 10000) {
                cout << -1 << endl;
                break;
            }
            x = (a * x + b) % c;
        }
    }
}
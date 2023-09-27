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
typedef tuple<int, int, int> TUPLE;
typedef vector<int> V;
typedef vector<V> VV;
typedef vector<VV> VVV;

signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    while (cin >> n, n) {
        V a(n);
        rep(i, n) cin >> a[i];

        int ans = -1e9;
        rep(i, n) {
            int t = 0;
            rep2(j, i, n) {
                t += a[j];
                ans = max(ans, t);
            }
        }

        cout << ans << endl;
    }
}
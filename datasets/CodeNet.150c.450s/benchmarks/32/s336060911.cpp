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

    int m, nmin, nmax;
    while (cin >> m >> nmin >> nmax, m) {
        V a(m);
        rep(i, m) cin >> a[i];

        int ans = -1;
        int ma_gap = -1;
        rep(i, m) {
            if (nmin <= i + 1 && i + 1 <= nmax) {
                int now_gap = a[i] - a[i + 1];
                if (now_gap >= ma_gap) {
                    ans = i + 1;
                    ma_gap = now_gap;
                }
            }
        }

        cout << ans << endl;
    }
}
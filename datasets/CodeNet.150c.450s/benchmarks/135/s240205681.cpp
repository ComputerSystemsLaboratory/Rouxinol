#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i=0;i<(n);i++)
#define rep2(i,a,b) for (int i=(a);i<(b);i++)
#define rrep(i,n) for (int i=(n)-1;i>=0;i--)
#define rrep2(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define all(a) (a).begin(),(a).end()

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<pll> vp;
typedef vector<ll> vll;


signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int N, M;
    while (cin >> N >> M && N) {
        vi h(N);
        vi w(M);
        rep(i, N) cin >> h[i];
        rep(i, M) cin >> w[i];

        vi sh;
        rep(i, N) {
            int t = 0;
            rep2(j, i, N) {
                t += h[j];
                sh.emplace_back(t);
            }
        }
        sort(all(sh));

        ll ans = 0;
        rep(i, M) {
            int t = 0;
            rep2(j, i, M) {
                t += w[j];
                ans += upper_bound(all(sh), t) - lower_bound(all(sh), t);
            }
        }
        cout << ans << endl;
    }
}
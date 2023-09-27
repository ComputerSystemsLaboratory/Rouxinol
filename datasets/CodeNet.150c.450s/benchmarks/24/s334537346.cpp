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

    int n, m;
    while (cin >> n >> m, n) {
        vector<P> v(n); // p, d
        rep(i, n) {
            cin >> v[i].second >> v[i].first;
        }
        sort(all(v));
        reverse(all(v));
        v.emplace_back(0, 1e9);
        int ans = 0;
        for (auto pa : v) {
            int safe = min(m, pa.second);
            m -= safe;
            ans += pa.first * (pa.second - safe);
        }
        cout << ans << endl;
    }
}
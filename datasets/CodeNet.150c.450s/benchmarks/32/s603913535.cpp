#include <bits/stdc++.h>
using namespace std;
#define int long long   // <-----!!!!!!!!!!!!!!!!!!!

#define rep(i,n) for (int i=0;i<(n);i++)
#define rep2(i,a,b) for (int i=(a);i<(b);i++)
#define rrep(i,n) for (int i=(n)-1;i>=0;i--)
#define rrep2(i,a,b) for (int i=(a)-1;i>=b;i--)
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define printV(v) for(auto x : v){cout << x << " ";} cout << endl
#define printVS(vs) for(auto x : vs){cout << x << endl;}
#define printVV(vv) for(auto v : vv){for(auto&& x : v){cout << x << " ";}cout << endl;}
#define printP(p) cout << p.first << " " << p.second << endl
#define printVP(vp) for(auto p : vp) printP(p);

typedef long long ll;
typedef pair<int, int> Pii;
typedef tuple<int, int, int> TUPLE;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<Pii> vp;
typedef vector<vector<int>> Graph;
const int inf = 1e9;
const int mod = 1e9 + 7;

signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int m, nmin, nmax;
    while (cin >> m >> nmin >> nmax, m) {
        vi v(m);
        rep(i, m) cin >> v[i];

        int ma_diff = -1;
        int ans = -1;
        rep2(i, nmin - 1, nmax) {
            if (ma_diff <= v[i] - v[i + 1]) {
                ma_diff = v[i] - v[i + 1];
                ans = i + 1;
            }
        }

        cout << ans << endl;
    }
}
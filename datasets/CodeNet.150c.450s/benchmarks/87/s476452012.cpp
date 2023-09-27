#include <bits/stdc++.h>
using namespace std;
#define int long long   // <-----!!!!!!!!!!!!!!!!!!!

#define rep(i,n) for (int i=0;i<(n);i++)
#define rep2(i,a,b) for (int i=(a);i<(b);i++)
#define rrep(i,n) for (int i=(n)-1;i>=0;i--)
#define rrep2(i,a,b) for (int i=(a)-1;i>=b;i--)
#define chmin(a,b) (a)=min((a),(b));
#define chmax(a,b) (a)=max((a),(b));
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define printV(v) cerr<<(#v)<<":";for(auto(x):(v)){cerr<<" "<<(x);}cerr<<endl;
#define printVS(vs) cerr<<(#vs)<<":"<<endl;for(auto(s):(vs)){cerr<<(s)<< endl;}
#define printVV(vv) cerr<<(#vv)<<":"<<endl;for(auto(v):(vv)){for(auto(x):(v)){cerr<<" "<<(x);}cerr<<endl;}
#define printP(p) cerr<<(#p)<<(p).first<<" "<<(p).second<<endl;
#define printVP(vp) cerr<<(#vp)<<":"<<endl;for(auto(p):(vp)){cerr<<(p).first<<" "<<(p).second<<endl;}

inline void output(){ cerr << endl; }
template<typename First, typename... Rest>
inline void output(const First& first, const Rest&... rest) {
    cerr << first << " "; output(rest...);
}

using ll = long long;
using Pii = pair<int, int>;
using TUPLE = tuple<int, int, int>;
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
const int inf = 1ll << 60;
const int mod = 1e9 + 7;
using Graph = vector<vector<int>>;

int h;
int w = 5;
vvi a;

void fall() {
    for (int i = h - 1; i > 0; i--) {
        rep(j, w) {
            if (a[i][j]) continue;
            int k = i;
            while (k >= 0 && !a[k][j]) {
                k--;
            }
            if (k >= 0) {
                a[i][j] = a[k][j];
                a[k][j] = 0;
            }
        }
    }
}

int check() {
    int ret = 0;
    rep(i, h) {
        rep(j, w) {
            if (!a[i][j]) continue;
            int l = 0;
            while (j + l < w && a[i][j] == a[i][j + l]) {
                l++;
            }
            if (l >= 3) {
                rep2(k, j, j + l) {
                    ret += a[i][k];
                    a[i][k] = 0;
                }
            }
        }
    }

    fall();

    return ret;
}

void solve() {
    a.clear();
    a.resize(h);
    rep(i, h) a[i].resize(w);
    rep(i, h) rep(j, w) cin >> a[i][j];

    int ans = 0;
    int t;
    // printVV(a);
    while (true) {
        t = check();
        // printVV(a);
        if (!t) break;
        ans += t;
    }

    cout << ans << endl;
}

signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    while (cin >> h, h) solve();
}
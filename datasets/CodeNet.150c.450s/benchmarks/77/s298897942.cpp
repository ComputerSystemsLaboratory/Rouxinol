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

// N, E, S, W
const int dx[4] = {-1, 0,  1,  0};
const int dy[4] = { 0, 1,  0, -1};

int chr2int(char c) {
    if (c == 'W') return 0;
    if (c == 'N') return 1;
    if (c == 'E') return 2;
    return 3;
}

signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    while (cin >> n, n) {
        vector<Pii> vp(n);
        rep(i, n) cin >> vp[i].first >> vp[i].second;
        int m;
        cin >> m;
        vector<vector<bool>> visited(21, vector<bool>(21));
        int x = 10, y = 10;
        visited[x][y] = true;
        rep(i, m) {
            char c;
            int l;
            cin >> c >> l;
            int d = chr2int(c);
            while (l--) {
                x += dx[d];
                y += dy[d];
                visited[x][y] = true;
            }
        }

        int cnt = 0;
        rep(i, n) {
            cnt += visited[vp[i].first][vp[i].second];
        }

        cout << (cnt == n ? "Yes" : "No") << endl;


    }
}
#include <bits/stdc++.h>
using namespace std;

#define REP(i,m,n) for(int i=(m); i<(int)(n); i++)
#define RREP(i,m,n) for(int i=(int)(n-1); i>=m; i--)
#define rep(i,n) REP(i,0,n)
#define rrep(i,n) RREP(i,0,n)
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define fi first
#define se second
#define debug(...) {cerr<<"[L"<<__LINE__<<"] "; _debug(__VA_ARGS__);}

template<typename T>
string join(const vector<T>&v, string del=", "){ stringstream s;
    for(auto x : v) s << del << x; return s.str().substr(del.size());
}
template<typename T>
ostream& operator<<(ostream& o, const vector<T>&v){
    if(v.size()) o << "[" << join(v) << "]"; return o;
}
template<typename T>
ostream& operator<<(ostream& o, const vector<vector<T> >&vv){
    int l = vv.size();
    if(l){ o<<endl; rep(i,l) o << (i==0 ? "[ " : ",\n  " ) << vv[i] << (i==l-1 ? " ]" : ""); }
    return o;
}
inline void _debug(){cerr<<endl;}
template<class First, class... Rest>
void _debug(const First& first, const Rest&... rest){cerr<<first<<" ";_debug(rest...);}

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;

const double PI = (1*acos(0.0));
const double EPS = 1e-9;
const int INF = 0x3f3f3f3f;
const ll INFL = 0x3f3f3f3f3f3f3f3fLL;
const ll mod = 1e9 + 7;

inline void finput(string filename) {
    freopen(filename.c_str(), "r", stdin);
}

vector<pii> mat;
vvi dp;
int rec(int l, int r){
    if(dp[l][r] != INF) return dp[l][r];
    if(l == r) return dp[l][r] = 0;
    int res = INF;
    REP(i,l,r){
        int x = mat[l].fi * mat[i].se * mat[r].se;
        res = min(res, x + rec(l,i) + rec(i+1,r));
    }
    return dp[l][r] = res;
}

int main(){
    ios_base::sync_with_stdio(0);
    // finput("./input");
    int n; cin >> n;
    mat = vector<pii>(n);
    rep(i,n){
        int r, c; cin >> r >> c;
        mat[i] = pii(r, c);
    }
    dp = vvi(n, vi(n, INF));
    if(n == 1) cout << 0 << endl;
    else cout << rec(0, n-1) << endl;
    return 0;
}

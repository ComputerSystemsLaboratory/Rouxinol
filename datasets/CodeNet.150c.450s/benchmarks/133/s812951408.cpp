#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int ll

typedef vector<int> vi;
typedef vector<bool> vb;
typedef pair<int,int> pii;
typedef vector<pair<int,int> > vpii;
typedef vector<vector<bool> > vvb;
typedef vector<vector<int> > vvi;
typedef map<int, bool> mib;

typedef long long ll;
typedef vector<long long> vl;
typedef pair<long long,long long> pll;
typedef vector<pair<long long,long long> > vpll;

typedef vector<string> vs;

typedef long double ld;

#define _GLIBCXX_DEBUG

#define REP(i,n) for (int i = 0; i < (n); ++i)
#define REPD(i,n) for (int i = (n-1); i >= 0; --i)
#define FORE(i, s, n) for (int i = (s); i <= (int)(n); i++)
#define FORED(i, s, n) for (int i = (s); i >= (int)(n); i--)
#define debug(x) cerr << #x << ": " << x << '\n'
#define debug2(x, y) cerr << #x << ": " << x << ", " << #y << ": " << y << '\n'
#define debug3(x, y, z) cerr << #x << ": " << x << ", " << #y << ": " << y << ", " << #z << ": " << z << '\n'
#define debugs(s) cerr << s << "\n"
#define hyphen() cerr << "--\n"

#define ALL(vec) (vec).begin(), (vec).end()
#define REVALL(vec) (vec).rbegin(), (vec).rend()

static const int dy[4] = {0,1,0,-1}, dx[4] = {1,0,-1,0};

#define fst first
#define snd second
#define pb push_back
#define mk(x,y) make_pair((x),(y))

// http://ehafib.hatenablog.com/entry/2015/12/23/164137
int qp(int a,ll b){int ans=1;do{if(b&1)ans=1ll*ans*a;a=1ll*a*a;}while(b>>=1);return ans;}
int qpm(int a,ll b,int mo){int ans=1;do{if(b&1)ans=1ll*ans*a%mo;a=1ll*a*a%mo;}while(b>>=1);return ans;}
// gcd : O(logN)
int gcd(int a,int b){return b?gcd(b,a%b):a;}
int lcm(int a, int b) { return a / gcd(a, b) * b; }

#define sz(v) int(v.size())

// x1, x2ライブラリとの被りを避ける
#define x1 x192837465
#define x2 x123456789
#define y1 y192837465
#define y2 y123456789

// typo
#define itn int
#define reutrn return
#define reutnr return
#define srting string

#define make(type, x) type x; cin>>x;
#define make2(type, x, y) type x, y; cin>>x>>y;
#define make3(type, x, y, z) type x, y, z; cin>>x>>y>>z;
#define make4(type, x, y, z, t) type x, y, z, t; cin>>x>>y>>z>>t;

int ctoi(const char c){
    if('0' <= c && c <= '9') return (c-'0');
    return -1;
}

#define uniq(v) (v).erase(unique(ALL((v))), (v).end());

// area of (0, 0)(a, b)(c, d)
double area(double a, double b, double c, double d){
    return abs(a * d - b * c) / 2.0;
}

const int PREC = 10;
#define coutf(val) cout << fixed << setprecision(PREC) << (val) << endl;

const int MOD = (int)1e9 + 7;
const int INF = numeric_limits<int>::max();

const int N = 26;

signed main() {
    make(int, D);

    vi Cs(N);
    REP(n, N) {
        make(int, C);
        Cs.at(n) = C;
    }

    vvi Ss(D, vi(N, 0));
    REP(d, D) {
        REP(n, N) {
            make(int, s);
            Ss.at(d).at(n) = s;
        }
    }

    vi Ts(D);
    REP(d, D) {
        make(int, t);
        t--;

        Ts.at(d) = t;
    }

    // そのコンテストが最後に行われた日にち
    vi Last(N, 0);

    // 満足度
    int ans = 0;

    // 点数の増減を忠実に実装
    REP(d, D) {
        int t = Ts.at(d);

        // やったコンテストに応じて満足度上昇
        ans += Ss.at(d).at(t);;
        Last.at(t) = d + 1;

        // 満足度低下
        REP(n, N) {
            ans -= Cs.at(n) * (d + 1 - Last.at(n));
        }

        cout << ans << endl;
    }

}

#include <bits/stdc++.h>
using namespace std;

typedef ostringstream OSS; typedef istringstream ISS;
typedef long long LL;
typedef pair<int, int> PII;  typedef pair<LL, LL> PLL;
typedef vector<int>    VI;   typedef vector<VI>   VVI;   typedef vector<VVI>   VVVI;
typedef vector<LL>     VLL;  typedef vector<VLL>  VVLL;  typedef vector<VVLL>  VVVLL;
typedef vector<double> VD;   typedef vector<VD>   VVD;   typedef vector<VVD>   VVVD;
typedef vector<string> VS;   typedef vector<VS>   VVS;   typedef vector<VVS>   VVVS;
typedef vector<bool>   VB;   typedef vector<VB>   VVB;   typedef vector<VVB>   VVVB;
typedef vector<PII>    VPII; typedef vector<VPII> VVPII; typedef vector<VVPII> VVVPII;
typedef vector<PLL>    VPLL; typedef vector<VPLL> VVPLL; typedef vector<VVPLL> VVVPLL;

typedef unsigned int  UI;
typedef vector<UI>    VUI;
typedef vector<VUI>   VVUI;

#define fst first
#define snd second
// #define Y first
// #define X second
#define MP make_pair
#define PB push_back
#define EB emplace_back 
#define ALL(x)  (x).begin(),(x).end()
#define RALL(x) (x).rbegin(),(x).rend()
#define RANGEBOX(x,y,maxX,maxY) (0 <= (x) && 0 <= (y) && (x) < (maxX) && (y) < (maxY))
#define RANGE(x, l, r) ((l) <= (x) && (x) <= (r))
#define rep(i, N)  for (int i = 0; i < (int)(N); i++)
#define rrep(i, N) for (int i = N - 1; i >= 0; i--)
#define REP(i, init, N)  for (int i = (init); i < (int)(N); i++)
#define RREP(i, N, last) for (int i = (init - 1); i >= last; i--)
#define MAXUD(orig, target) orig = max(orig, target)
#define MINUD(orig, target) orig = min(orig, target)
#define DUMP( x ) cerr << #x << " = " << ( x ) << endl

template < typename T > inline T fromString(const string &s) { T res; ISS iss(s); iss >> res; return res; };
template < typename T > inline string toString(const T &a)   { OSS oss; oss << a; return oss.str(); };

template<typename T=int> inline void dump(vector<T> vs, bool ent=false) { rep(i, vs.size()) cout << vs[i] << (i+1==vs.size() ? '\n' : ' '); if (ent) cout << endl; }
template<typename T = int> inline void dump(vector<vector<T>> vs, bool ent = false) { rep(i, vs.size()) dump<T>(vs[i]); if (ent) cout << endl; }

const int    INF  = 0x3f3f3f3f;
const LL     INFL = 0x3f3f3f3f3f3f3f3fLL;
const double DINF = 0x3f3f3f3f;
const int    DX[] = {1,  0, -1, 0};
const int    DY[] = {0, -1,  0, 1};
const double EPS  = 1e-12;
// const double PI   = acos(-1.0);
// lambda: [](T1 x)->T2{return y;}
// simple lambda: [](T x){return x;}

const int W = 5;
int H;
VVI ts;

bool terase() {
    bool res = false;

    rep(y, H) {
        rep(x, 3) {
            if (ts[y][x] && 
                ts[y][x] == ts[y][x + 1] &&
                ts[y][x] == ts[y][x + 2]) {
                int n = ts[y][x];
                for (int x2 = x; x2 < W && ts[y][x2] == n; x2++) {
                    ts[y][x2] = 0;
                }
                res = true;
            }
        }
    }

    return res;
}

void tfall() {
    REP(y, 1, H) {
        rep(x, W) {
            if (ts[y][x] && !ts[y - 1][x]) {
                int y2 = y - 1;
                for (; y2 - 1 >= 0 && !ts[y2 - 1][x]; y2--);
                swap(ts[y][x], ts[y2][x]);
            }
        }
    }
}

int solve() {
    ts = VVI(H, VI(W));
    rep(y, H) rep(x, W) cin >> ts[H - y - 1][x];

    int before = 0;
    rep(i, H) before += accumulate(ALL(ts[i]), 0);

    while (true) {
        bool f = terase();
        tfall();
        if (!f) break;
    }
   
    int after = 0;
    rep(i, H) after += accumulate(ALL(ts[i]), 0);

    return before - after;
}

int main(void) {
    while (cin >> H, H) cout << solve() << endl;
    

    return 0;
}
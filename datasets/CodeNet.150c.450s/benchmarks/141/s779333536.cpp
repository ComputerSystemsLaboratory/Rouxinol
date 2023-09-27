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
const double EPS  = 1e-6;
// const double PI   = acos(-1.0);
// lambda: [](T1 x)->T2{return y;}
// simple lambda: [](T x){return x;}

#define X real()
#define Y imag()

typedef complex<double> P;

// a = b
bool eq(double a, double b) {
    return abs(a - b) < EPS;
}

// ?????¢
double distPP(P a, P b) {
    return abs(a - b);
}

// ??????????????¬???
double heron(double a, double b, double c) {
    double s = (a + b + c) / 2.;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

double heron(P a, P b, P c) {
    return heron(distPP(a, b), distPP(b, c), distPP(c, a));
}

// ????§???¢??¨??????????????????
bool inTriangle(P a, P b, P c, P p) {
    double s1 = heron(a, b, c);
    double s2 = heron(p, b, c) + heron(a, p, c) + heron(a, b, p);
    return eq(s1, s2);
}

int main(void) {
    double x1, y1, x2, y2, x3, y3, xp, yp;
    while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp) {
        P a(x1, y1);
        P b(x2, y2);
        P c(x3, y3);
        P p(xp, yp);
        cout << (inTriangle(a, b, c, p) ? "YES" : "NO") << endl;
    }


    return 0;
}
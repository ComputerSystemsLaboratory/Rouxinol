#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)n; ++i)
#define repf(i, f, l) for(int i = f; i < (int)l; ++i)

#ifdef ONLINE_JUDGE
#define DEBUG false
#else
#define DEBUG true
#endif

#define pb emplace_back
#define lb lower_bound
#define ul unsigned long
#define ull unsigned long long
#define ll long long
#define INF 1000000007
#define MOD 1000000007
#define fs first
#define sd second

#define ALL(c) (c).begin(),(c).end()

#define DBG0(x)    {if(DEBUG){ cout << #x << ": " << x << "\t"; }}
#define DBG(x)     {if(DEBUG){DBG0(x); cout << endl;}}
#define DBG2(x, y) {if(DEBUG){DBG0(x); DBG(y);}}
#define DBG3(x, y, z) {if(DEBUG){DBG0(x); DBG2(y, z);}}
#define DBG4(w, x, y, z) {if(DEBUG){DBG0(w); DBG3(x, y, z);}}

template <class T>
ostream& operator<<(ostream& os, vector<T> xs){ for(T x: xs) os << x << ' '; return os; }
template <class S, class T>
ostream& operator<<(ostream& os, pair<S,T> st){ os << "(" << st.first << "," << st.second <<")"; return os; }

using namespace std;
const double EPS = 1.0e-14;
typedef complex<double> Point;
istream& operator>>(istream& is, Point &pt){
    double a, b;
    is >> a >> b;
    pt.real(a); pt.imag(b);
    return is;
}

ostream& operator<<(ostream& os, const Point &pt){
    os << make_pair(pt.real(), pt.imag());
    return os;
}

inline double cross(const Point &a, const Point &b){
    return (a.real()*b.imag() - a.imag()*b.real());
}

inline double myarg(Point &a){
    double ret = arg(a);
    return (ret >= 0 ? ret : ret + 2*M_PI);
}

inline double signed_area(const Point &a, const Point &b, const Point &c){
    Point ab = b - a;
    Point ac = c - a;
    return cross(ab, ac) / 2.0;
}

inline bool intersect(const Point &a1, const Point &a2, const Point &b1, const Point &b2) {
  return ((cross(a2-a1, b1-a1) * cross(a2-a1, b2-a1) < EPS) &&
          (cross(b2-b1, a1-b1) * cross(b2-b1, a2-b1) < EPS));
}

void sort_by_arg(vector<Point> &pts){
    sort(pts.begin(), pts.end(), [](Point a, Point b){ return (myarg(a) < myarg(b)); });
}

double area(vector<Point> &vs){
    int n = vs.size();
    vector<Point> pts(n - 1);
    rep(i, n - 1) pts[i] = vs[i + 1] - vs[0];
    sort_by_arg(pts);
    double ans = 0.0;
    rep(i, n - 1) ans += cross(vs[i], vs[i + 1]);
    return ans / 2.0;
}


typedef vector<int> vint;
typedef vector<ll> vll;
typedef vector<ul> vul;
typedef vector<ull> vull;
typedef vector<bool> vbl;
typedef pair<int, int> pii;

bool counter_clock_wise(const Point &a, const Point &b, const Point &c){
    if(cross(a, b) > 0 && cross(b, c) > 0) return true;
    else return false;
}

int main(void){
    Point a, b, c, p;
    while(cin >> a >> b >> c >> p){
        double A, B, C;
        A = cross(b - a, p - a);
        B = cross(c - b, p - b);
        C = cross(a - c, p - c);
        if((A > 0 && B > 0 && C > 0) || 
           (A < 0 && B < 0 && C < 0))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
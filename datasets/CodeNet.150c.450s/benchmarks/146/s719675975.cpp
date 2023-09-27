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

const double EPS = 1.0e-11;
template <class T>
ostream& operator<<(ostream& os, vector<T> xs){ for(T x: xs) os << x << ' '; return os; }
template <class S, class T>
ostream& operator<<(ostream& os, pair<S,T> st){ os << "(" << st.first << "," << st.second <<")"; return os; }

typedef vector<int> vint;
typedef vector<ll> vll;
typedef vector<ul> vul;
typedef vector<ull> vull;
typedef vector<bool> vbl;
typedef pair<int, int> pii;

typedef complex<long long> Point;
istream& operator>>(istream& is, Point &pt){
    double a, b;
    is >> a >> b;
    pt.real(a * 1000000); pt.imag(b* 1000000);
    return is;
}

ostream& operator<<(ostream& os, const Point &pt){
    os << make_pair(pt.real(), pt.imag());
    return os;
}

inline long long cross(const Point &a, const Point &b){
    return (a.real()*b.imag() - a.imag()*b.real());
}

int main(void){

    int n;
    cin >> n;
    while(n-->0){
        Point a,b,c,d;
        cin >> a >> b >> c >> d;
//      DBG4(a, b, c, d);
//      DBG(cross(b - a, d - c));
        if(cross(b - a, d - c) == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
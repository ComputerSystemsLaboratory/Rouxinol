/*
 * Author: pranay.agra
 * Time: 2020-07-17 00:51:57
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;
using vii = vector<ii>;
using vvi = vector<vi>; //vector<vector<int>>
using vvll = vector<vll>;
using vs = vector<string>;

const int INF = 1 << 30;
const int MAX_N = 100000 + 5;
const int MAX_L = 20; // ~ Log N
const ll MOD = 1e9 + 7;
const int xd[4] = {1,0,-1,0}, yd[4] = {0,1,0,-1};

#define PI 3.14159265
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend() 
#define sz(x) (int)((x).size())
#define arrsz(x) (int) (sizeof((x))/sizeof((x)[0]))

#define LSOne(S) (S & (-S))
#define isBitSet(S, i) ((S >> i) & 1)
#define toDigit(x) ((int)((x)-'0'))

#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i,a) ROF(i,0,a)
#define trav(a,x) for (auto& a: x)


/* Usage: dbg(a, b) */
void dbg_out() { cout << endl; }
void __print(int x) {cout << x;}
void __print(long x) {cout << x;}
void __print(long long x) {cout << x;}
void __print(unsigned x) {cout << x;}
void __print(unsigned long x) {cout << x;}
void __print(unsigned long long x) {cout << x;}
void __print(float x) {cout << x;}
void __print(double x) {cout << x;}
void __print(long double x) {cout << x;}
void __print(char x) {cout << '\'' << x << '\'';}
void __print(const char *x) {cout << '\"' << x << '\"';}
void __print(const string &x) {cout << '\"' << x << '\"';}
void __print(bool x) {cout << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cout << '{'; __print(x.first); cout << ','; __print(x.second); cout << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cout << '{'; for (auto &i: x) cout << (f++ ? "," : ""), __print(i); cout << "}";}
void _print() {cout << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cout << ", "; _print(v...);}
#ifdef PD
#define dbg(x...) cout << "[" << #x << "] = ["; _print(x)
#define dbgn(...) dbg_out(__VA_ARGS__)
#else
#define dbg(x...)
#define dbgn(...) 
#endif

// FILE I/O
void setIn(string s) { freopen(s.c_str(),"r",stdin); }
void setOut(string s) { freopen(s.c_str(),"w",stdout); }
void unsyncIO() { ios_base::sync_with_stdio(0); cin.tie(0); }
void setIO(string s = "") {
	unsyncIO();
	// cin.exceptions(cin.failbit); 
	// throws exception when do smth illegal
	// ex. try to read letter into int
	if (sz(s)) { setIn(s+".in"), setOut(s+".out"); } // for USACO
}

/* Usage: output_vector(solution), which prints elements with spaces and then new line*/
template<typename T>
void output_vector(const vector<T> &v, int start = -1, int end = -1) {
    if (start < 0) start = 0;
    if (end < 0) end = int(v.size());
 
    for (int i = start; i < end; i++)
        cout << v[i] << " ";
    cout << endl;
}

/* (x, y) point structure */
template <typename T>
struct Point {
    T x, y;
    
    Point(T _x, T _y) : x(_x), y(_y) {}
    
    friend ostream& operator<<(ostream& os, const Point& p) {
        return os << "(" << p.x << ", " << p.y << ")";
    }
};

/* floor(log2(x)) */
int bit(int x) { return 31-__builtin_clz(x); }

/* division of a by b rounded up, assumes b > 0 */
int cdiv(int a, int b) { return a/b+!(a<0||a%b == 0); }

/* Calculate A^B mod M. Time Complexity: O(logB) */
ll qexp(ll A, ll B, ll M) {
    if (B == 0) return 1;
    ll half = qexp(A, B/2, M) % M;
    half *= half;
    half %= M;
    if (B % 2 == 1) half *= A; 
    return half % M;
}

/* Custom comparator template for sorting */
struct Compare {
    bool operator()(pair<int, int> const & a, pair<int, int> const & b) { 
        if (a.fi != b.fi) {
            return a.fi < b.fi;
        }
        return a.se > b.se; 
    }
};

void run_case() {
    map<ll, ll> combos;

    FOR(i, 1, 101) {
        FOR(j, 1, 101) {
            FOR(k, 1, 101) {
                ll val = i*i + j*j + k*k + i*j + j*k + i*k;
                ++combos[val];
            }
        }
    }

    int n; cin >> n;
    FOR(i, 1, n + 1) {
        cout << combos[i] << endl;
    }
    
}

int main() {
    #ifdef ONLINE_JUDGE
    setIO();
    #else
    setIO();
    #endif
    int tests = 1; //cin >> tests;
    while(tests--) {
        run_case();
        dbgn();
    }
}

/**
Remember to check for overflow (long long)
Does number need to be greater than a lower bound?
**/

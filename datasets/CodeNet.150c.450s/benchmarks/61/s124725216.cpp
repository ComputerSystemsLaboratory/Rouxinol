#include <bits/stdc++.h>
using namespace std;

// template {{{
/* vim: set foldmethod=marker: */

// constant
const int INF = (int)1e9;
const int MOD = (int)1e9 + 7;
const double PI = acos(-1);
#define EPS 1e-14

// typedef
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

// input
inline int inputi(){ int x; scanf("%d", &x); return x; }
inline double inputd(){ double x; scanf("%lf", &x); return x; }
inline string inputs(){ string x; cin >> x; return x; }

// short
#define pb push_back
#define mp make_pair
#define fst first
#define sec second

// repetition
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define RFOR(i, a, b) for (int i = (b) - 1; i >= (a); i--)
#define REP(i, n) for (int i = 0; i < (n); i++)
#define RREP(i, n) for (int i = (n) - 1; i >= 0; i--)
#define REPit(type, i, obj) for (type::iterator i = (obj).begin(); i != (obj).end(); i++)
#define RREPit(type, i, obj) for (type::iterator i = (obj).rbegin(); i != (obj).rend(); i++)

// container util
#define all(obj) (obj).begin(), (obj).end()
#define rall(obj) (obj).rbegin(), (obj).rend()
#define sz(obj) ((int)(obj).size())
#define sort(obj) sort(all(obj))
#define exist(obj, key) ((obj).find(key) != (obj).end())
#define clear(array) memset((array), 0, sizeof(array))

// print util
#define print(x) cout << (x) << endl
template <class T> inline void printall(vector<T> v){ REP(i, sz(v)) cout << v[i] << "\n "[i < sz(v) - 1]; }
#define dump(x) cerr << #x << ": " << (x) << endl
#define debug(x) cerr << #x << ": " << (x) << " (" << __LINE__ << ")" << endl

//template }}}

int main()
{
    ll n, a, b, c, x;

    while (cin >> n >> a >> b >> c >> x, n){
        int y[n];
        REP(i, n) cin >> y[i];

        int cnt = 0;
        REP(i, 10001){
            if (x == y[cnt]){
                cnt++;
            }
            if (cnt == n){
                print(i);
                break;
            }
            x = (a * x + b) % c;
        }
        if (cnt < n) puts("-1");
    }

    return 0;
}
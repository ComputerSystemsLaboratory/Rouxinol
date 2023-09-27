#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>
#include <cstring>
#include <deque>
#include <list>
#include <queue>
#include <stack>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>
#include <set>
#include <complex>
#include <cmath>
#include <limits>
#include <climits>
#include <ctime>
#include <cassert>
using namespace std;

#define rep(i,a,n) for(int i=a; i<n; i++)
#define repq(i,a,n) for(int i=a; i<=n; i++)
#define repr(i,a,n) for(int i=a; i>=n; i--)
#define pb(a) push_back(a)
#define fr first
#define sc second
#define INF 2000000000
#define int long long int

#define X real()
#define Y imag()
#define EPS (1e-10)
#define EQ(a,b) (abs((a) - (b)) < EPS)
#define EQV(a,b) ( EQ((a).X, (b).X) && EQ((a).Y, (b).Y) )
#define LE(n, m) ((n) < (m) + EPS)
#define LEQ(n, m) ((n) <= (m) + EPS)
#define GE(n, m) ((n) + EPS > (m))
#define GEQ(n, m) ((n) + EPS >= (m))

typedef vector<int> VI;
typedef vector<VI> MAT;
typedef pair<int, int> pii;
typedef long long ll;

typedef complex<double> P;
typedef pair<P, P> L;
typedef pair<P, double> C;

int dy[]={0, 0, 1, -1};
int dx[]={1, -1, 0, 0};
int const MOD = 1000000007;

namespace std {
    bool operator<(const P& a, const P& b) {
        return a.X != b.X ? a.X < b.X : a.Y < b.Y;
    }
}

// Binary Indexed Tree (BIT)
// Verified: AOJ DSL_2_B: Range Sum Query (int??????)

template <typename T>
struct BIT{
private:
    vector<T> array;
    const int n;

public:
    // ?????????
    BIT(int _n) : array(_n + 1, 0), n(_n) {}

    // 1???????????? i???????????§????´???????????±???????
    T sum(int i) {
        T s = 0;
        while(i > 0) {
            s += array[i];
            i -= i & -i;      // LSB ??????
        }
        return s;
    }

    // [i, j] ???????´??????????
    T sum(int i, int j) {
        T ret_i = sum(i-1);
        T ret_j = sum(j);
        return ret_j - ret_i;
    }

    // i ????????? ????´? x ?????????
    void add(int i, T x) {
        while(i <= n) {
            array[i] += x;
            i += i & -i;      // LSB ??????
        }
    }
};

signed main() {
    int n; cin >> n;
    BIT<int> b(n);
    vector<int> a(n);
    map<int, int> m;
    rep(i,0,n) {
        cin >> a[i];
        m[a[i]];
    }

    int newnum = 1;
    for(auto &x : m) x.second = newnum++;
    rep(i,0,n) a[i] = m[a[i]];

    int ans = 0;
    rep(j,0,n) {
        ans += j - b.sum(a[j]);
        b.add(a[j], 1);
    }
    cout << ans << endl;
    return 0;
}
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
struct zeroIndexedBIT{
private:
    vector<T> array;
    int n;

public:
    // ????????? (??????)
    zeroIndexedBIT() : array(10, 0), n(10) {}
    zeroIndexedBIT(int _n) : array(_n, 0), n(_n) {}

    // ?????????????????§ BIT ?????????????????¨????????????????????§?????£???
    void resize(int _n) {
        array.resize(_n);
        n = _n;
    }

    // 0???????????? i???????????§????´???????????±???????
    T sum(int i) {
        T s = 0;
        for(int k=i; k>=0; k = (k&(k+1)) - 1) s += array[k];
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
        for(int k=i; k<n; k |= k+1) array[k] += x;
    }
};

signed main() {
    int n, q; cin >> n >> q;
    zeroIndexedBIT<int> b(n);
    int c, x, y;
    rep(i,0,q) {
        cin >> c;
        if(c == 0) {
            cin >> x >> y; x--;
            b.add(x, y);
        }
        else {
            cin >> x >> y; x--; y--;
            cout << b.sum(x, y) << endl;
        }
    }
    return 0;
}
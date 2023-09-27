//#pragma GCC optimize("O3")
//#pragma GCC target("avx2")
// 293206GT
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <map>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <unordered_set>
#include <stack>
#include <string>
#include<algorithm>
#include <random>
#include <bitset>
#include <chrono>

typedef long long ll;

using namespace std;
#define put(a) cout << (a) << '\n'
#define sqr(x) (x) * (x)
typedef pair<ll, ll> pii;
typedef long double ld;
#define double long double
typedef pair<ld, ld> pld;
#define rep(x, y, a) for (int x = (y); x < (int)(a); ++x)
#define all(a) a.begin(), a.end()
#define chkmax(a, b) a = max(a, (b))
#define chkmin(a, b) a = min(a, (b))
#define prev asasdasd
#define next aasdasda
#define left asdasdasdasd
#define right asnabsdkasdl
#define rank asdasdknlasd
#define move asdasdas

typedef vector<ll> vi;
typedef vector<pii> vpii;
namespace IO {
    template<class A, class B>
    ostream &operator<<(ostream &out, pair<A, B> &a) {
        out << a.first << " " << a.second;
        return out;
    }

    template<class A, class B>
    ostream &operator<<(ostream &out, vector<pair<A, B>> &a) {
        for (pair<A, B> x: a)
            out << x.first << " " << x.second << '\n';
        return out;
    }

    template<class A>
    ostream &operator<<(ostream &out, vector<A> &a) {
        for (A x: a) out << x << ' ';
        return out;
    }

    template<class A, class B>
    istream &operator>>(istream &in, pair<A, B> &a) {
        in >> a.first >> a.second;
        return in;
    }

    template<class A>
    istream &operator>>(istream &in, vector<A> &a) {
        for (A &x: a) in >> x;
        return in;
    }
}
using namespace IO;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
#define int ll
int gauss (vector < vector<int> > a, vector<int> & ans) {
    int n = (int) a.size();
    int m = (int) a[0].size() - 1;

    vector<int> where (m, -1);
    for (int col=0, row=0; col<m && row<n; ++col) {
        int sel = row;
        for (int i=row; i<n; ++i)
            if (abs (a[i][col]) > abs (a[sel][col]))
                sel = i;
        if (a[sel][col] == 0)
            continue;
        for (int i=col; i<=m; ++i)
            swap (a[sel][i], a[row][i]);
        where[col] = row;

        for (int i=0; i<n; ++i)
            if (i != row) {
                int c = a[i][col] / a[row][col];
                for (int j=col; j<=m; ++j)
                    a[i][j] ^= a[row][j] * c;
            }
        ++row;
    }

    ans.assign (m, 0);
    for (int i=0; i<m; ++i)
        if (where[i] != -1)
            ans[i] = a[where[i]][m] / a[where[i]][i];
    for (int i=0; i<n; ++i) {
        int sum = 0;
        for (int j=0; j<m; ++j)
            sum ^= ans[j] * a[i][j];
        if (sum != a[i][m])
            return 0;
    }

    for (int i=0; i<m; ++i)
        if (where[i] == -1)
            return 1e9;
    return 1;
}
int is_in(vi a, int x) {
    if (a.size() == 0) return 0;
    vector<vi> c;
    while (1) {
        c.push_back({});
        int f = 0;
        for (int &x: a) {
            c[c.size() - 1].push_back(x % 2);
            x /= 2;
            if (x > 0) f = 1;
        }
        c[c.size() - 1].push_back(x % 2);
        x /= 2;
        if (!f && x == 0) break;
    }
    vi sn;
    return gauss(c, sn) > 0;
}
void solve() {
    int n;
    cin >> n;
    vi a(n);
    cin >> a;
    string s;
    cin >> s;
    vi cur;
    for (int i = n - 1; i >= 0; --i) {
        if (s[i] == '1') {
            if (!is_in(cur, a[i])) {
                put(1);
                return;
            }
        }
        if (!is_in(cur, a[i])) cur.push_back(a[i]);
    }
    put(0);
}


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout.precision(30);
//    freopen("input.txt", "r", stdin);
//    freopen("input.txt", "r", stdin);
    int q = 1;
    cin >> q;
    while (q--) solve();
}


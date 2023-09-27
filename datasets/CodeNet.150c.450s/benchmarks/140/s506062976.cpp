#include <iostream>
#include <array>
#include <algorithm>
#include <vector>
#include <bitset>
#include <set>
#include <unordered_set>
#include <cmath>
#include <complex>
#include <deque>
#include <iterator>
#include <numeric>
#include <map>
#include <unordered_map>
#include <queue>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <limits>
#include <iomanip>
#include <functional>
#include <cassert>
using namespace std;

using ll=long long;
template<class T> using V = vector<T>;
template<class T, class U> using P = pair<T, U>;
using vll = V<ll>;
using vvll = V<vll>;
#define rep(i, k, n) for (ll i=k; i<(ll)n; ++i)
#define REP(i, n) rep(i, 0, n)
#define ALL(v) v.begin(),v.end()
template < class T > inline bool chmax(T& a, T b) {if (a < b) { a=b; return true; } return false; }
template < class T > inline bool chmin(T& a, T b) {if (a > b) { a=b; return true; } return false; }
#define DEBUG_VLL(vec) REP(sz, vec.size()) std::cerr<<vec[sz]<<(sz==vec.size()-1?'\n':' ');

const long long MOD = 1000000007;
const long long HIGHINF = (long long)1e18;
const int INF = (int)1e9;

int v, e;

struct UnionFind {
    vector<int> par, cnt;

    UnionFind(int n): par(n, -1), cnt(n) {}
    int find(int x) {
        if (par[x]<0) return x;
        return par[x] = find(par[x]);
    }
    bool same(int i, int j) {
        // iとjが同じグループかどうかを判別する
        return find(i) == find(j);
    }
    int size(int x) {
        return -par[find(x)];
    }

    bool unite(int x, int y) {
        // iとjを併合する
        x = find(x);
        y = find(y);
        bool ok = (-par[x]>cnt[x] || -par[y]>cnt[y]);
        if (x == y) {
            cnt[x]++;
        } else if (par[x] > par[y]) {
            par[y] += par[x];
            par[x] = y;
            cnt[y] += cnt[x]+1;
        } else {
            par[x] += par[y];
            par[y] = x;
            cnt[x] += cnt[y]+1;
        }
        return ok;
    }
};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> v >> e;
    priority_queue< P<int, P<int, int> > > pq;
    for (int i = 0; i < e; i++) {
        int s, t, w;
        cin >> s >> t >> w;
        pq.push(make_pair(-w, make_pair(s, t)));
    }

    UnionFind uni(v);

    int ans = 0;
    while (!pq.empty()) {
        P<int, P<int, int> > q = pq.top(); pq.pop();
        if (!uni.same(q.second.first, q.second.second)) {
            uni.unite(q.second.first, q.second.second);
            ans -= q.first;
        }
    }
    cout << ans << '\n';
    return 0;
}


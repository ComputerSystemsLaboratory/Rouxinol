#include <algorithm>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)
#define repk(i, k, n) for (int i = k; i < n; i++)
#define MOD 1000000007
#define INF 1e9
#define PIE 3.14159265358979323

template <class T>
inline bool chmin(T &a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template <class T>
inline bool chmax(T &a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}
template <class T>
T GCD(T a, T b) {
    if (b == 0)
        return a;
    else
        return GCD(b, a % b);
}
template <class T>
inline T LCM(T a, T b) {
    return (a * b) / GCD(a, b);
}

using namespace std;
//#inculude <bits/stdc++.h>
//#define int long long

template <class T>
struct Union_find {
    vector<T> parent;
    vector<T> rank;
    vector<T> size_of;

    Union_find(T n) : parent(n), rank(n), size_of(n) {
        for (T i = 0; i < n; i++) {
            parent[i] = i;
            rank[i] = 0;
            size_of[i] = 1;
        }
    }

    T root(T x) {
        return parent[x] == x ? x : parent[x] = root(parent[x]);
    }

    bool same(T x, T y) {
        return root(x) == root(y);
    }

    T size(T x) {
        return size_of[root(x)];
    }

    void unite(T x, T y) {
        x = root(x);
        y = root(y);
        if (x == y)
            return;
        if (rank[x] < rank[y]) {
            size_of[y] += size_of[x];
            parent[x] = y;
        }
        else {
            size_of[x] += size_of[y];
            parent[y] = x;
            if (rank[x] == rank[y])
                rank[x]++;
        }
        return;
    }
};

signed main() {
    int v, e;
    cin >> v >> e;
    vector<pair<int, pair<int, int>>> g(e);
    rep(i, e) cin >> g[i].second.first >> g[i].second.second >> g[i].first;
    sort(g.begin(), g.end());
    int ans = 0;
    Union_find<int> uf(v);
    rep(i, e) {
        if (!uf.same(g[i].second.first, g[i].second.second)) {
            ans += g[i].first;
            uf.unite(g[i].second.first, g[i].second.second);
        }
    }
    cout << ans << endl;
    return 0;
}

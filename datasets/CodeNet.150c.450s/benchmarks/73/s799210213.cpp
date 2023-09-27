#include <algorithm>
#include <bitset>
#include <cmath>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits>
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
class SegmentTree {
  private:
    int n = 1;
    vector<T> segtree;
    function<T(T, T)> operation;
    T ie;

    T _query(int a, int b, int k, int l, int r) {
        if (a >= r || b <= l)
            return ie;
        else if (a <= l && b >= r)
            return segtree[k];
        else {
            int vl = _query(a, b, 2 * k + 1, l, (l + r) / 2);
            int vr = _query(a, b, 2 * k + 2, (l + r) / 2, r);
            return operation(vl, vr);
        }
    }

  public:
    SegmentTree(vector<T> v, function<T(T, T)> _operation, T _ie) {
        operation = _operation;
        ie = _ie;
        while (v.size() > n)
            n *= 2;
        segtree.resize(2 * n - 1, ie);
        for (int i = 0; i < v.size(); i++)
            segtree[i + n - 1] = v[i];
        for (int i = n - 2; i >= 0; i--)
            segtree[i] = operation(segtree[2 * i + 1], segtree[2 * i + 2]);
    }

    T operator[](int i) {
        return segtree[i + n - 1];
    }

    void update(int i, T x) {
        i += n - 1;
        segtree[i] = x;
        while (i > 0) {
            i = (i - 1) / 2;
            segtree[i] = operation(segtree[2 * i + 1], segtree[2 * i + 2]);
        }
    }

    T query(int a, int b) {
        return _query(a, b, 0, 0, n);
    }
};

signed main() {
    int n, q, com, x, y;
    cin >> n >> q;
    vector<int> v(n, 0);
    auto f = [](int a, int b) -> int { return a+b; };
    int e = 0;
    SegmentTree<int> s(v, f, e);
    rep(i, q) {
        cin >> com >> x >> y;
        x--;
        if (com == 0)
            s.update(x, y+s[x]);
        else
            cout << s.query(x, y) << endl;
    }
    return 0;
}

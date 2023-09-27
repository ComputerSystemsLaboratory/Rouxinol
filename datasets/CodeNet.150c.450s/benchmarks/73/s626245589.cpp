#include <algorithm>
#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <functional>
#include <iostream>
#include <iomanip>
#include <iterator>
#include <map>
#include <queue>
#include <sstream>
#include <utility>
#include <vector>

using namespace std;

typedef long long Long;
#define whole(xs) xs.begin(), xs.end()

struct RangeSumQuery {
    int N;
    int* v;
    static int FindPow2(int x) {
        int x1 = 1;
        while (x1 < x) {
            x1 *= 2;
        }
        return x1;
    }
    RangeSumQuery(int N_, int init = 0) : N(FindPow2(N_)) {
        v = new int[N * 2];
        fill(v, v + N * 2, init);
    }
    ~RangeSumQuery() {
        delete[] v;
    }
    int dfs(int s, int t, int a, int b, int k) {
        if (s <= a && b <= t) return v[k];
        if (t <= a || b <= s) return 0;
        int m = (a + b) / 2;
        return dfs(s, t, a, m, k * 2) + dfs(s, t, m, b, k * 2 + 1);
    }
    // 半開区間[s, t)の和を返す
    int query(int s, int t) {
        return dfs(s, t, 0, N, 1);
    }
    // 要素iにxを加える
    void add(int i, int x) {
        i += N;
        while (i > 0) {
            v[i] += x;
            i /= 2;
        }
    }
};

int main() {
    int n, q; cin >> n >> q;
    RangeSumQuery rsq(n + 1, 0);
    for (int i = 0; i < q; i++) {
        int c, x, y;
        cin >> c >> x >> y;
        if (c == 0) {
            rsq.add(x, y);
        } else {
            cout << rsq.query(x, y + 1) << endl;
        }
    }
    return 0;
}
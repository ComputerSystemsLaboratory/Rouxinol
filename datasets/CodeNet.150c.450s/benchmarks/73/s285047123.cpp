#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i, a, b) for (int i = (a); i < (int)(b); ++i)
#define rrep(i, a, b) for (int i = (int)(b) - 1; i >= (int)(a); --i)
#define all(c) c.begin(),c.end()
#define sz(x) ((int)x.size())
using pii = pair<int, int>;
using vvi = vector<vector<int>>;
using vi  = vector<int>;

struct BIT {
    int size;
    int pow2_less;
    vi data;

    BIT(int N) : size(N + 1), data(N + 1, 0) {
        pow2_less = 1;
        while ((pow2_less << 1) <= size) {
            pow2_less <<= 1;
        }
    }

    // 1-indexed
    void add(int idx, int value) {
        while (idx < size) {
            data[idx] += value;
            idx += idx & -idx;
        }
    }

    // 1-indexed
    int sum(int idx) {
        int ret = 0;
        while (idx > 0) {
            ret += data[idx];
            idx -= idx & -idx;
        }
        return ret;
    }

    // sum(x) >= value となる最小のxを返す
    int lower_bound(int value) {
        if (value <= 0) {
            return 0;
        }
        int pos = 0;
        for (int k = pow2_less; k > 0; k >>= 1) {
            if (pos + k < size && data[pos + k] < value) {
                value -= data[pos + k];
                pos += k;
            }
        }
        return pos + 1;
    }
};

signed main() {
    int N, Q;
    cin >> N >> Q;
    BIT bit(N);
    rep(i, 0, Q) {
        int C, X, Y;
        cin >> C >> X >> Y;
        if (C == 0) {
            // add
            bit.add(X, Y);
        } else {
            // sum
            cout << bit.sum(Y) - bit.sum(X - 1) << endl;
        }
    }
}


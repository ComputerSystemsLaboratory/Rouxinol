#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (a); i < (int)(b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (int)(b); i--)
#define all(x) (x).begin(), (x).end()
using i32 = int32_t;
using i64 = int64_t;
using f32 = float;
using f64 = double;
using P   = pair<int, int>;

template <class T>
bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    } else {
        return false;
    }
}
template <class T>
bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    } else {
        return false;
    }
}

template <class T>
void dump_vec(const vector<T>& v) {
    auto len = v.size();
    rep(i, 0, len) {
        cout << v[i] << (i == (int)len - 1 ? "\n" : " ");
    }
}

struct FastIO {
    FastIO() {
        cin.tie(0);
        ios::sync_with_stdio(false);
        cout << fixed << setprecision(20);
    }
} FASTIO;

//---------------------------------------------------------------------------------------------------

//---------------------------------------------------------------------------------------------------

int paridx(int k) {
    return (k - 1) / 2;
}

int leftidx(int k) {
    return (k << 1) + 1;
}

int rightidx(int k) {
    return (k << 1) + 2;
}

signed main() {
    int N;
    cin >> N;
    vector<int> heap(N);
    rep(i, 0, N) cin >> heap[i];

    rep(i, 0, N) {
        cout << "node " << i + 1 << ": ";
        cout << "key = " << heap[i] << ", ";
        if (i > 0) {
            cout << "parent key = " << heap[paridx(i)] << ", ";
        }
        auto l = leftidx(i);
        if (l < N)
            cout << "left key = " << heap[l] << ", ";
        auto r = rightidx(i);
        if (r < N)
            cout << "right key = " << heap[rightidx(i)] << ", ";
        cout << "\n";
    }
}


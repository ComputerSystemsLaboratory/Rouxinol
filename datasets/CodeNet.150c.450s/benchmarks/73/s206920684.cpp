#include <bits/stdc++.h>
using namespace std;

//http://hos.ac/slides/20140319_bit.pdf
template<class T, int MAX_N>
struct FenwickTree { //0-indexed
    int N;
    T data[MAX_N];
    void init(int n) {
        N = n;
        memset(data, 0, sizeof(data));
    }
    T sum(int j) { //[0, j)
        T ret = 0;
        for(int x = j - 1; x >= 0; x = (x & (x + 1)) - 1)
          ret += data[x];
        return ret;
    }
    void add(int j, T w) { // 0 <= j < N
        for(int x = j; x < N; x |= x + 1)
          data[x] += w;
    }
};

//Range Minimum Query
template<class T, int MAX_N>
struct SegmentTree {
    int n;
    T data[MAX_N * 2 - 1];
    const T INF = (1LL << 31) - 1LL;//rewrite
    void init(int n_) {
        n = 1;
        while(n < n_) n *= 2;
        fill_n(data, 2 * n - 1, INF);
    }
    void update(int k, T a) {//0-indexed
        k += n - 1;
        data[k] = a;
        while(k > 0) {
            k = (k - 1) >> 1;
            data[k] = min(data[k * 2 + 1], data[k * 2 + 2]); 
        }
    }
    T __query(int a, int b, int k, int l, int r) {
        if(r <= a || b <= l) return INF;
        if(a <= l && r <= b) return data[k];
        else {
            T val_l = __query(a, b, k * 2 + 1, l, (l + r) >> 1);
            T val_r = __query(a, b, k * 2 + 2, (l + r) >> 1, r);
            return min(val_l, val_r);
        }
    }
    T query(int a, int b) { //[a, b)
        return __query(a, b, 0, 0, n);
    }
};

FenwickTree<long long, 1 << 17> fewt;
int main() {
    cin.tie(0); ios::sync_with_stdio(false);
    int N, Q; cin >> N >> Q;
    fewt.init(N);
    for(int i = 0; i < Q; ++i) {
        int com, x, y;
        cin >> com >> x >> y;
        --x;
        if(com == 0) fewt.add(x, static_cast<long long>(y));
        else {
            long long r = fewt.sum(y);
            long long l = fewt.sum(x);
            cout << r - l << '\n';
        }
    }
    return 0;
}
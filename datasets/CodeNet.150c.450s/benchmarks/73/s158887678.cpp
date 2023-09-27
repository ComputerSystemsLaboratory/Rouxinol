#include <iostream>
#include <algorithm>
using namespace std;

template<typename T, int MAX_N>
struct segment_tree_sum {
    T arr[MAX_N << 1]; int N;

    segment_tree_sum(int n) {
        N = 1;
        while (N < n) N *= 2;

        for (int i = 0; i < 2*N-1; ++i) {
            arr[i] = (T)0;
        }
    }

    void add(int i, T v) {
        int j = i + N-1;
        arr[j] += v;
        while (j > 0) {
            j = (j-1) / 2;
            arr[j] += v;
        }
    }

    T query(int a, int b) {
        return query(a, b, 0, 0, N);
    }

    T query(int a, int b, int k, int l, int r) {
        if (r <= a || b <= l) return 0;
        if (a <= l && r <= b) return arr[k];

        int m = (l+r)/2;
        return query(a, b, 2*k+1, l, m) + query(a, b, 2*k+2, m, r);
    }
};

int N, Q;

int main() {
    cin.tie(0); ios::sync_with_stdio(false);
    cin >> N >> Q;
    segment_tree_sum<int, 201010> segt(N+1);
    for (int j = 0; j < Q; ++j) {
        int c, x, y;
        cin >> c >> x >> y;
        if (c == 0) {
            segt.add(x, y);
        } else {
            cout << segt.query(x, y+1) << endl;
        }
    }
    return 0;
}
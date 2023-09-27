#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
#define U(v) cerr << #v << ": " << (v) << endl

template <class T>
struct BIT {
    vector<T> a;
    BIT(int size) : a(size, 0) {}
    T sum(int r) const {
        T sm = 0;
        for (--r; r >= 0; r = (r & r + 1) - 1)
            sm += a[r];
        return sm;
    }
    T sum(int l, int r) const {
        return sum(r) - sum(l);
    }
    T at(int i) const {
        return sum(i, i + 1);
    }
    void add(int i, T v) {
        for (; i < (int)a.size(); i |= i + 1)
            a[i] += v;
    }
    void set(int i, T v) {
        add(i, v - at(i));
    }
};

int main() {
    int n, q;
    cin >> n >> q;
    BIT<long long> bit(n);
    while (q--) {
        int com, x, y;
        cin >> com >> x >> y;
        --x;
        if (com)
            cout << bit.sum(x, y) << endl;
        else
            bit.add(x, y);
    }
    return 0;
}
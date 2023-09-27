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
    int n;
    cin >> n;
    vector<int> a(n);
    vector<pair<int, int>> b(n);
    for (int i = 0; i < n; ++i) {
        cin >> b[i].first;
        b[i].second = i;
    }
    sort(b.begin(), b.end());
    for (int i = 0; i < n; ++i)
        a[b[i].second] = i;
    BIT<int> bit(n);
    long long sm = 0;
    for (int i = n - 1; i >= 0; --i) {
        sm += bit.sum(a[i]);
        bit.add(a[i], 1);
    }
    cout << sm << endl;
    return 0;
}
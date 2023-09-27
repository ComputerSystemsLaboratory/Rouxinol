#include <iostream>
#include <utility>
#include <vector>
using namespace std;

template<class T> class BIT {
  public:
    vector<T> bit;
    int size;

    BIT() {}
    BIT(int n, T v = 0) {
        size = n;
        bit.resize(size + 1, v);
    }

    // sum [0, i)
    T sum(int i) {
        T s = 0;
        while (i > 0) {
            s += bit[i];
            i -= i & -i;
        }
        return s;
    }

    // sum [i, j)
    T sum(int i, int j) {
        return sum(j) - sum(i);
    }

    void add(int i, T x) {
        i++;
        while (i <= size) {
            bit[i] += x;
            i += i & -i;
        }
    }
};

int main(void) {
    int n, q;
    cin >> n >> q;
    BIT<int> a(n);
    for (int i = 0; i < q; i++) {
        int c, x, y;
        cin >> c >> x >> y;
        if (c == 0) a.add(x - 1, y);
        else 
            cout << a.sum(x - 1, y) << endl;
    }
    return 0;
}
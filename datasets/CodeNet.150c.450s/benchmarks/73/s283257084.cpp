#include <iostream>
#include <vector>
using namespace std;

struct BIT {
    int n;
    vector<int> data;

    BIT(int size) : n(size), data(n+1, 0) { }

    void add(int k, int a) {
        k++;
        while(k <= n) data[k] += a, k += (k & -k);
    }

    // [0, i) ??????(?????????????????即???)
    int sum(int k) {
        int s = 0;
        while(k > 0) s += data[k], k -= (k & -k);
        return s;
    }

    int sum(int l, int r) {
        return sum(r + 1) - sum(l);
    }
};

int main() {
    int n, q;
    cin >> n >> q;
    BIT bit(n);
    while(q--) {
        int com, x, y;
        cin >> com >> x >> y;
        if(com == 0) {
            bit.add(x - 1, y);
        }
        else {
            cout << bit.sum(x - 1, y - 1) << endl;
        }
    }
}
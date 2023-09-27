#include <bits/stdc++.h>
using namespace std;

class BIT {
public:
    static const int MAX_N = 100000;
    // [1, n]
    int bit[MAX_N+1], n;

    BIT(int n) {
        this->n = n;
        for (int i = 0; i <= n; i++) bit[i] = 0;
    }

    int sum(int i) {
        int s = 0;
        while (i > 0) {
            s += bit[i];
            i -= i & -i;
        }
        return s;
    }

    int getSum(int s, int t) {
        return sum(t) - sum(s-1);
    }

    void add(int i, int x) {
        while (i <= n) {
            bit[i] += x;
            i += i & -i;
        }
    }
};

int main(void) {
    int n, q; cin >> n >> q;
    BIT bit(n);

    for (int i = 0; i < q; i++) {
        int com, x, y; cin >> com >> x >> y;
        if (com == 0) {
            bit.add(x, y);
        } else {                // com == 1
            cout << bit.getSum(x, y) << endl;
        }
    }

    return 0;
}
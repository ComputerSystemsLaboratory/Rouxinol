#include <iostream>
using namespace std;

inline int addTax(int x, int p) {
    return x * (100 + p) / 100;
}

int main() {
    int x, y, s;
    while (cin >> x >> y >> s && (x || y || s)) {
        int mx = 0;
        for (int i=1; i<=1000; ++i) {
            for (int j=i; j<=1000; ++j) {
                if (addTax(i, x) + addTax(j, x) == s) {
                    mx = max(mx, addTax(i, y) + addTax(j, y));
                }
            }
        }
        cout << mx << endl;
    }
    return 0;
}
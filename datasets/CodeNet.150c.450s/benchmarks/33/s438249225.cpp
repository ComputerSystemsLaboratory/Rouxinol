#include <iostream>
using namespace std;

inline int addTax(int x, int p) {
    return x * (100 + p) / 100;
}

int main() {
    int x, y, sum;
    while (cin >> x >> y >> sum && (x || y || sum)) {
        int mx = 0;
        int t = sum * 100 / (100 + x);
        for (int a=1; a<=t; ++a) {
            for (int b=t-a; b<=t-a+2; ++b) {
                if (addTax(a, x) + addTax(b, x) == sum) {
                    mx = max(mx, addTax(a, y) + addTax(b, y));
                }
            }
        }
        cout << mx << endl;
    }
    return 0;
}
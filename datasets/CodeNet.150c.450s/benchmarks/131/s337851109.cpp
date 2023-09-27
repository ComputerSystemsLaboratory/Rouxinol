#include <cstdio>
#include <algorithm>
#include <map>
#include <iostream>
using namespace std;

int main() {
    int x, l, t[10], mi, ma;
    bool f;
    map<int, int> a;

    while (cin >> x >> l && x || l) {
        a.clear();
        f = true;
        for (int n = 1; f; n++) {
            a[x] = n;
            for (int i = 0; i<l; i++) {
                t[i] = x % 10; x /= 10;
            }

            sort(t, t + l);
            mi = ma = 0;
            for (int i = 0; i<l; i++) {
                mi *= 10; mi += t[i];
                ma *= 10; ma += t[l - 1 - i];
            }

            x = ma - mi;
            if (a[x]) {
                printf("%d %d %d\n", a[x] - 1, x, n - a[x] + 1);
                f = false;
            }
        }
    }
}
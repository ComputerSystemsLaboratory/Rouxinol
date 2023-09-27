#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, p;
    while (cin >> n >> p, n) {
        int m = 0, q = p, st[50] = {};
        while (1) {
            if (p == 0) {
                p += st[m];
                st[m] = 0;
            } else {
                p--;
                st[m]++;
                if (p == 0 && st[m] == q) {
                    break;
                }
            }
            m = (m + 1) % n;
        }
        cout << m << endl;
    }
    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define vec vector

int main(void)
{
    while(1) {
        int n, m;
        cin >> n >> m;
        if (n == 0 && m == 0) break;
        vec<int> x(11, 0);
        rep(i, n) {
            int p, q;
            cin >> p >> q;
            x[q] += p;
        }
        int ok = 0;
        int ans = 0;
        for (int i = 10; i >= 0; i--) {
            if (ok) {
                ans += x[i] * i;
                continue;
            }
            m -= x[i];
            if (m < 0) {
                ans += - m * i;
                ok = 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
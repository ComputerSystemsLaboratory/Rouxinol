#include <iostream>
#include <cstring>
#include <algorithm>
#include <functional>
using namespace std;

#define rep(i,n) for (int i = 0; i < (n); ++i)

inline void init() {
    cin.tie(0);
    ios::sync_with_stdio(false);
}

int m, nmin, nmax, ans, dif;
int tester[205];

int main(void) {
    init();

    while (cin >> m >> nmin >> nmax, m | nmin | nmax) {
        memset(tester, 0, sizeof(tester));
        ans = dif = -1;
        rep (i,m) cin >> tester[i];

        sort(tester, tester + m, greater<int>());

        for (int i = nmin; i <= nmax; ++i) {
            int tmp = tester[i-1] - tester[i];
            if (dif <= tmp) {
                ans = i;
                dif = tmp;
            }
        }
        cout << ans << endl;
        /*rep(i,m) {
            cout << tester[i] << endl;
        }*/
    }
    return 0;
}
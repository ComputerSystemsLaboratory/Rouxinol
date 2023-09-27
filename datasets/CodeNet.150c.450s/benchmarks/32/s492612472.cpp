#include<iostream>

using namespace std;

int main() {
    while (1) {
        int m, nmin, nmax;
        cin >> m >> nmin >> nmax;

        if (m == 0) break;

        int ans = 0;
        int tmp;
        cin >> tmp;
        int maxgap = 0;
        for (int i = 1; i < m; ++i) {
            int s;
            cin >> s;
            if (maxgap <= tmp - s && i >= nmin && i <= nmax) {
                maxgap = tmp - s;
                ans = i;
            }
            tmp = s;
        }

        cout << ans << endl;
    }
}
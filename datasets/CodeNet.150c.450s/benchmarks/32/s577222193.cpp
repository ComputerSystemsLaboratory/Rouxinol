#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    while (1) {
        int m, nmin, nmax;
        scanf("%d%d%d", &m, &nmin, &nmax);
        if (m == 0 && nmin == 0 && nmax == 0) break;

        int P[m];
        for (int i = 0; i < m; ++i) {
            cin >> P[i];
        }

        sort(P, P + m, greater<int>());
//        for (int i = 0; i < m; ++i) {
//            cout << P[i] << endl;
//        }
        int maxgap = 0;
        int maxgapn;
        for (int i = nmin - 1; i <= nmax - 1; ++i) {
            int gap = P[i] - P[i + 1];
            if (gap >= maxgap) {
                maxgapn = i;
                maxgap = gap;
            }
        }

        cout << maxgapn + 1 << endl;
    }
    return 0;
}

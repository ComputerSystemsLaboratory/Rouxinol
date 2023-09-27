#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, nmin, nmax;
    while (cin >> m >> nmin >> nmax, m | nmin | nmax) {
        vector<int> P(m);
        for (int i = 0; i < m; i++) {
            cin >> P[i];
        }

        int cost = 0, ans = 0;
        for (int i = 0; i < m; i++) {
            if (i + 1 < nmin || i + 1 > nmax) continue;
            if (i + 1 >= m) continue;
            if (P[i] - P[i + 1] >= cost) {
                cost = P[i] - P[i + 1];
                ans = i + 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
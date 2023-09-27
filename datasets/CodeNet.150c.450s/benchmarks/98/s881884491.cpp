#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    while (cin >> n >> m, n || m) {
        vector<int> v1(n), v2(m);
        int d = 0;
        for (int i=0; i<n; ++i) {
            cin >> v1[i];
            d += v1[i];
        }
        for (int i=0; i<m; ++i) {
            cin >> v2[i];
            d -= v2[i];
        }
        int t = 999, ret1 = 999, ret2 = 999;
        for (int i=0; i<n; ++i) {
            for (int j=0; j<m; ++j) {
                if ((v1[i] - v2[j]) * 2 == d && v1[i] + v2[j] < t) {
                    t = v1[i] + v2[j];
                    ret1 = v1[i];
                    ret2 = v2[j];
                }
            }
        }
        if (ret1 == 999 && ret2 == 999) {
            cout << -1 << endl;
        } else {
            cout << ret1 << " " << ret2 << endl;
        }
    }
    return 0;
}
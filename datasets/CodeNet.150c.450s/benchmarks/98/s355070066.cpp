#include <iostream>

using namespace std;

int main() {
    int n, m;
    int taro[101], hanako[101];
    int taro_sum, hanako_sum;

    while (cin >> n >> m) {
        if (!n && !m) { break; }
        taro_sum = 0; hanako_sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> taro[i];
            taro_sum += taro[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> hanako[i];
            hanako_sum += hanako[i];
        }
        int diff = taro_sum - hanako_sum;
        int ans[2] = {101, 101};
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if ((taro[i] - hanako[j]) * 2 == diff && (taro[i] + hanako[j]) < (ans[0] + ans[1])) {
                    ans[0] = taro[i];
                    ans[1] = hanako[j];
                }
            }
        }
        if (ans[0] == 101 || ans[1] == 101) {
            cout << -1 << endl;
        }
        else {
            cout << ans[0] << " " << ans[1] << endl;
        }
    }
    return 0;
}

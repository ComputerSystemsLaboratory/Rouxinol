#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    while (cin >> n >> m, n) {
        vector<int> cnt(11);
        while (n--) {
            int d, p; cin >> d >> p; cnt[p] += d;
        }
        for (int p = 10; p >= 0; p--) {
            int sub = min(m, cnt[p]);
            m -= sub, cnt[p] -= sub;
        }
        int ans = 0;
        for (int p = 0; p < 11; p++) ans += p * cnt[p];
        cout << ans << endl;
    }
    return 0;
}

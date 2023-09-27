#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>

using ll = long long;

using namespace std;

int main() {
    while (true) {
        int n;
        cin >> n;
        if (n == 0) break;
        int a[n];
        for (auto &ai:a) {
            cin >> ai;
        }
        sort(a, a+n);
        int prev = -1000000, ans = 1000000;
        for (auto &ai:a) {
            ans = min(ans, ai - prev);
            prev = ai;
        }
        cout << ans << '\n';
    }
    return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;

const int MAX_N = 100009;

int n, k, a[MAX_N];

int s[MAX_N];

int main() {
    while (true) {
        s[0] = 0;

        cin >> n >> k;
        if (n == 0 && k == 0) break;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            s[i+1] = s[i] + a[i];
        }

        int ans = -1000000007;
        for (int i = 0; i + k <= n; i++) {
            ans = max(ans, s[i+k] - s[i]);
        }
        cout << ans << endl;
    }
    return 0;
}

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, a[1001];
    int ans;

    while (true) {
        cin >> n;
        if (!n) { break; }

        for (int i = 0; i < n; i++) { cin >> a[i]; }

        ans = 1e8;

        for (int i = 0; i < n-1; i++) {
            for (int j = i+1; j < n; j++) {
                ans = min(ans, abs(a[i] - a[j]));
            }
        }
        cout << ans << endl;
    }
    return 0;
}

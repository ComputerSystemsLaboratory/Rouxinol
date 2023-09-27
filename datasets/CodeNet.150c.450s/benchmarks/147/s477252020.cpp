#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int x = 1; x * x <= n; ++x) {
        for (int y = 1; y * y <= n; ++y) {
            for (int z = 1; z * z <= n; ++z) {
                const int s = x * x + y * y + z * z + x * y + y * z + z * x;
                if (s <= n) {
                    ++a[s];
                }
            }
        }
    }
    for (int i = 1; i <= n; ++i) {
        cout << a[i] << "\n";
    }
    return 0;
}

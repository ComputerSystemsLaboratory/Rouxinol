#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    while (true) {
        cin >> n;
        if (!n) break;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        int ans = 1e9;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                ans = min(ans, abs(a[i] - a[j]));
            }
        }
        cout << ans << endl;
    }
}


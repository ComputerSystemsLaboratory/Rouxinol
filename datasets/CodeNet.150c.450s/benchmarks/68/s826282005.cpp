#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (true) {
        cin >> n;
        if (n == 0) break;
        
        vector<int> a(n), d(n-1);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < n-1; i++) {
            d[i] = a[i+1] - a[i];
        }
        
        int ans = *min_element(d.begin(), d.end());
        cout << ans << '\n';
    }
    return 0;
}

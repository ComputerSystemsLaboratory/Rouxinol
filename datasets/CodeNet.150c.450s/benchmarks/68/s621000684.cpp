#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;

    while (true) {
        int n; cin >> n;
        if (n == 0) break;

        vector<int> a(n);

        rep(i, n) cin >> a.at(i);
        sort(a.begin(), a.end());

        int ans = a.at(1) - a.at(0);
        for (int i = 1; i < n; i++) {
            ans = min(ans, a.at(i) - a.at(i-1));
        }
        cout << ans << endl;
    }
}

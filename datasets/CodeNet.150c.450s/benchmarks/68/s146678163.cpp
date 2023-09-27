#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int (i)=(0);(i)<(int)(n);++(i))
using ll = long long;

int main() {

    int n;
    while (cin >> n, n) {
        vector<int> a(n);
        rep(i, n) cin >> a[i];

        sort(a.begin(), a.end());
        ll ans = 1e8;
        for (int i=0; i<n-1; ++i) {
            ans = min(ans, (ll)abs(a[i] - a[i+1]));
        }

        cout << ans << endl;
    }
}
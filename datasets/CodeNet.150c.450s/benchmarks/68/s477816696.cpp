#include <iostream>
#include <cstdlib>
using namespace std;

#define rep(i,n) for (int i = 0; i < (n); ++i)

int n, a[1005], ans;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    while (cin >> n, n) {
        ans = (int)1e9 + 7;
        rep(i,n) cin >> a[i];
        rep(i,n) {
            for (int j = i+1; j < n; ++j) {
                if (ans > abs(a[i] - a[j])) ans = abs(a[i] - a[j]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
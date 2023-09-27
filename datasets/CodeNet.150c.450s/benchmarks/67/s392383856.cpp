#include <algorithm>
#include <iostream>

#define rep(i, n) for (int i = 0; i < (n); i++)

using namespace std;
int N;
bool ok(int i, int m) {
    if (m == 0) return 1;
    if (m < 0) return 0;
    return ok(i + 1, m - i);
}
void solve() {
    int ans = 0;
    rep(i, N) if (i) {
        if (ok(i, N)) ans++;
    }
    cout << ans << endl;
}
int main() {
    while (cin >> N) {
        if (N == 0) break;
        solve();
    }
}
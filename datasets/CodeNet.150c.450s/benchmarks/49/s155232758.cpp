#include <iostream>
#include <string>

#define rep(i, n) for (int i = 0; i < n; i++)

using namespace std;

int n;
int s[102];
void solve() {
    int mini = 10000;
    int maxi = -1;
    int ans = 0;
    rep(i, n) {
        if (s[i] < mini) mini = s[i];
        if (s[i] > maxi) maxi = s[i];
        ans += s[i];
    }
    ans -= mini;
    ans -= maxi;

    cout << ans / (n - 2) << endl;
}

int main() {
    while (cin >> n) {
        if (n == 0) break;
        rep(i, n) cin >> s[i];
        solve();
    }
}
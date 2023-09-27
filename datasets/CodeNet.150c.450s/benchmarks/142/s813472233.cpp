#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = k + 1; i <= n; i++) {
        if (a[i - k] < a[i]) {
            cout << "Yes" << '\n';
        } else {
            cout << "No" << '\n';
        }
    }
    return 0;
}
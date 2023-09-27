#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; ++i) {
        cout << v[i];
        if (i < n - 1)
            cout << " ";
    }
    cout << "\n";

    for (int i = 0; i < n; ++i) {
        if ((1 << i + 1) > n) {
            cout << (i * (1 << i) + (n - (1 << i)) * (i + 2)) << "\n";
            return 0;
        }
    }

    return 0;
}
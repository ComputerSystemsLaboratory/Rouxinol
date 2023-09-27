#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n, n) {
        vector<int> v(n);
        for (auto& i : v) cin >> i;
        sort(v.begin(), v.end());

        int min_sub = 1 << 28;

        for (int i = 0; i < n - 1; i++) {
            min_sub = min(min_sub, v[i+1]-v[i]);
        }

        cout << min_sub << endl;
    }

    return 0;
}
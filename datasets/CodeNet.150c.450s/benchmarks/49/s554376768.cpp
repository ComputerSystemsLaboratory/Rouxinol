#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    while (true) {
        cin >> n;
        if (!n) break;
        vector<int> a(n);
        int sum = 0;
        for (int i = 0; i < n; ++i) cin >> a[i];
        sort(a.begin(), a.end());
        for (int i = 1; i < n-1; ++i) {
            sum += a[i];
        }
        cout << sum/(n-2) << endl;
    }
}
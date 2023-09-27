#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    while (true) {
        cin >> n >> m;
        if (!n && !m) break;
        int p, c;
        vector<int> a(n);
        vector<int> b;
        for (int i = 0; i < n; ++i) {
            a[i] = n-i;
        }
        for (int i = 0; i < m; ++i) {
            cin >> p >> c; --p; --c;
            for (int j = p; j < p+c+1; ++j) {
                b.push_back(a[j]);
            }
            for (int j = 0; j < p; ++j) {
                b.push_back(a[j]);
            }
            for (int j = p+c+1; j < n; ++j) {
                b.push_back(a[j]);
            }
            a = b;
            b.clear();
        }
        cout << a[0] << endl;
    }
}
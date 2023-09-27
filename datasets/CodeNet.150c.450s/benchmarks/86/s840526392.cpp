#include<bits/stdc++.h>
using namespace std;
using P = pair<int, int>;

int main() {
    while (1) {
        int n, m, p;
        cin >> n >> m >> p;
        if (!n) return 0;
        --m;
        vector<int> x(n);
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> x[i];
            sum += x[i];
        }
        cout << (x[m] ? sum * (100 - p) / x[m] : 0) << "\n";
    }
}


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, p;
    while (cin >> n >> m >> p, n || m || p) {
        vector<int> x(n);
        int sum = 0;
        for (auto& i : x) cin >> i, sum+=i;

        if (x[m-1] > 0) cout << sum * (100 - p) / x[m-1] << endl;
        else cout << 0 << endl;
    }

    return 0;
}


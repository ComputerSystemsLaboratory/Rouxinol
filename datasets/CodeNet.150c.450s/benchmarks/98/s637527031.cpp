#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    while (cin >> n >> m, n || m) {
        vector<int> s1(n), s2(m);
        for (auto& i : s1) cin >> i;
        for (auto& i : s2) cin >> i;

        int sum1 = 0, sum2 = 0;
        for (auto i : s1) sum1 += i;
        for (auto i : s2) sum2 += i;

        int sum = 1 << 28;
        int I = 1000, J = 1000;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (sum1 - s1[i] + s2[j] == sum2 - s2[j] + s1[i] && I + J > s1[i] + s2[j]) {
                    I = s1[i];
                    J = s2[j];
                }
            }
        }

        if (I < 1000) cout << I << " " << J << endl;
        else cout << -1 << endl;
    }

    return 0;
}


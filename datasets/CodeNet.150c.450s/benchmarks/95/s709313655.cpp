#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n, n) {
        int count = 0;
        vector<int> l(n+1), r(n+1);
        for (int i = 1; i <= n; i++) {
            char v, w;
            cin >> v >> w;

            if (v == 'r') {
                r[i] = r[i-1] ? 0 : 1;
                l[i] = l[i-1];
            } else {
                r[i] = r[i-1];
                l[i] = l[i-1] ? 0 : 1;
            }

            if (i > 1 && r[i] == l[i] && r[i] != r[i-2] && l[i] != l[i-2]) count++;
        }

        cout << count << endl;
    }

    return 0;
}


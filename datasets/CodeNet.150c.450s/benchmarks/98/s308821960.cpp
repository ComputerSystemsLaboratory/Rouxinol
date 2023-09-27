#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

int main() {
    int n, m;

    for (;;) {
        cin >> n >> m; 
        if (n == 0 && m == 0) break;

        vector<int> s(n + m);
        int s1 = 0, s2 = 0;
        for (int i = 0; i < n + m; i++) {
            cin >> s[i];
            if (i < n) {
                s1 += s[i];
            } else {
                s2 += s[i];
            }
        }

        int ans1 = 100, ans2 = 100;
        for (int i = 0; i < n; i++) {
            for (int j = n; j < n + m; j++) {
                int a = s[i], b = s[j];
                if ((s1 + b - a) == (s2 + a - b) && (a + b) < (ans1 + ans2)) {
                    ans1 = a;
                    ans2 = b;
                }
            }
        }

        if (ans1 == 100 && ans2 == 100) {
            cout << -1 << endl;
        } else {
            cout << ans1 << " " << ans2 << endl;
        }
    }
}
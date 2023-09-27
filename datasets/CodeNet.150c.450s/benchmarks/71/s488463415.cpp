#include <bits/stdc++.h>

using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)

int main() {
    int n, cnt = 0;
    while (cin >> n) {
        cnt = 0;
        REP(a, 10) REP(b, 10) REP(c, 10) {
                    int d = n - a - b - c;
                    if (d >= 0 && d <= 9) cnt++;
                }
        cout << cnt << endl;
    }
    return 0;
}
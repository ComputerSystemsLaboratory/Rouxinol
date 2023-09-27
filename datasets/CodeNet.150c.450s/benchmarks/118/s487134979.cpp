#include <bits/stdc++.h>
using namespace std;

int Y, M, D;

int calc(int y, int m, int d) {
    int res = 0;
    for (int i = 1; i < y; i++) {
        if (i % 3 == 0) res += 10 * 20;
        else res += 5 * 20 + 5 * 19;
    }
    if (y % 3 == 0) {
        res += (m - 1) * 20;
    } else {
        for (int i = 1; i < m; i++) {
            if (i % 2 == 1) res += 20;
            else res += 19;
        }
    }
    res += d;
    return res;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> Y >> M >> D;
        cout << calc(1000, 1, 1) - calc(Y, M, D) << endl;
    }
}

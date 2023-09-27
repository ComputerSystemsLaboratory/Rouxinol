// @author: arch_

#include <bits/stdc++.h>
using namespace std;

array<array<int, 100 + 1>, 100 + 1> t;

int main(void) {
    int r, c;
    cin >> r >> c;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) cin >> t[i][j];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            t[i][c] += t[i][j];
            t[r][j] += t[i][j];
            t[r][c] += t[i][j];
        }
    }
    for (int i = 0; i <= r; i++) {
        for (int j = 0; j <= c; j++) {
            cout << t[i][j];
            if (j != c) cout << " ";
        }
        cout << "\n";
    }
    return 0;
}
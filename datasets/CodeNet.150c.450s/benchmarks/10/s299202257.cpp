// @author: arch_

#include <bits/stdc++.h>
using namespace std;

array<array<array<int, 10>, 3>, 4> oh;

int main(void) {
    int n; cin >> n;
    int b, f, r, v;
    for (int i = 0; i < n; i++) {
        cin >> b >> f >> r >> v;
        oh[b - 1][f - 1][r - 1] += v;
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 10; k++) cout << " " << oh[i][j][k];
            cout << "\n";
        }
        if (i != 3) cout << "####################\n";
    }
    return 0;
}
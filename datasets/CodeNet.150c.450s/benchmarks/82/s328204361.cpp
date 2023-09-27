#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <time.h>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <iomanip>
using namespace std;

int findindex(int n, int x[]) {
    for (int i = 0; i < 6; i++) {
        if (x[i] == n) {
            return i;
        }
    }
    return -1;
}

int main() {
    int d[6], n, u, f, U, F, r;
    for (int i = 0; i < 6; i++) {
        cin >> d[i];
    }

    int dice_face[6][5] = {{1, 2, 4, 3, 1}, {0, 3, 5, 2, 0}, {0, 1, 5, 4, 0}, {0, 4, 5, 1, 0}, {0, 2, 5, 3, 0}, {1, 3, 4, 2, 1}};

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> u >> f;
        U = findindex(u, d);
        F = findindex(f, d);
        r = dice_face[U][findindex(F, dice_face[U]) + 1];
        cout << d[r] << endl;
    }
    return 0;
}
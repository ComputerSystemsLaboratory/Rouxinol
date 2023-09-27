#include <bits/stdc++.h>
using namespace std;

int main() {
    int e;
    while (true) {
        scanf("%d", &e); if (e == 0) break;
        int m = e;
        int vmin = -1;
        for (int z = 0; z*z*z <= e; ++z) {
            for (int y = 0; y*y+z*z*z <= e; ++y) {
                int x = e-z*z*z-y*y;
                if (m > x+y+z) m = x+y+z;
            }
        }
        cout << m << endl;
    }
}
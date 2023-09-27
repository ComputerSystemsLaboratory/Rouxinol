#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int e;
    while (true) {
        cin >> e;
        if (e == 0) {
            break;
        }
        int m = -1;
        for (int z=0, z_3=0; z_3<=e; z++, z_3=z*z*z) {
            for (int y=0, y_2=0; z_3+y_2<=e; y++, y_2=y*y) {
                int x;
                for (x=0; z_3+y_2+x<e; x++);
                if (z_3+y_2+x == e) {
                    if (m > 0) {
                        m = min(m, x+y+z);
                    }
                    else {
                        m = x+y+z;
                    }
                }
            }
        }
        cout << m << endl;
    }
    return 0;
}
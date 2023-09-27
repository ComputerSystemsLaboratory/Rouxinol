#include <iostream>
#include <algorithm>
using namespace std;

int e;
int main() {
    while (cin >> e, e != 0) {
        int m = 1<<28;
        for (int z = 0; z*z*z <= e; z++) {
            for (int y = 0; y*y <= e-z*z*z; y++) {
                int x = e-z*z*z-y*y;
                m = min(m, x+y+z);
            }
        }
        cout << m << endl;
    }
    return 0;
}
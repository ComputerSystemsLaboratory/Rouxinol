#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int e;
    while (cin >> e, e) {
        int ret = 1e6;
        for (int z=0; z*z*z<=e; ++z) {
            int y = (int)pow(e - z*z*z, 1.0/2.0);
            int x = e - z*z*z - y*y;
            ret = min(ret, x+y+z);
        }
        cout << ret << endl;
    }
    return 0;
}
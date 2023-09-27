#include <iostream>
#include <climits>
using namespace std;
int main() {
    int e;
    while (cin >> e, e) {
        int mx = INT_MAX;
        for (long long z=0; z*z*z<=e; ++z) {
            for (long long y=0; y*y+z*z*z<=e; ++y) {
                long long x = e - z*z*z - y*y;
                if (x + y + z < mx) {
                    mx = x + y + z;
                }
            }
        }
        cout << mx << endl;
    }
    return 0;
}
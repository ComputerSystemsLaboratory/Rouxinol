#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n; cin >> n;
    for (int i = 0; i < n; ++i) {
        double x1, y1, x2, y2, x3, y3, x4, y4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        int ax = x1 * 1000000 - x2 * 1000000;
        int ay = y1 * 1000000 - y2 * 1000000;
        int bx = x3 * 1000000 - x4 * 1000000;
        int by = y3 * 1000000 - y4 * 1000000;
        cout << (ax * by == ay * bx ? "YES" : "NO") << endl;
    }
    return 0;
}
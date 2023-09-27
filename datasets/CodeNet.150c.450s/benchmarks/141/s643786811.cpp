#include <iostream>
using namespace std;

int main() {
    double x[3], y[3], xp, yp, a, b, c, d;
    while (cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> xp >> yp) {
        int cnt = 0;
        for (int i=0; i<3; ++i) {
            a = x[(i+1)%3] - x[i];
            b = y[(i+1)%3] - y[i];
            c = xp - x[i];
            d = yp - y[i];
            if (0 < a * d - b * c) cnt ++;
        }
        cout << (cnt % 3 ? "NO" : "YES") << endl;
    }
    return 0;
}
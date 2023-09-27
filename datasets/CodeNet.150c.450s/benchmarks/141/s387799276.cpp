#include <iostream>
#include <cmath>
using namespace std;

int z(double x1, double y1, double x2, double y2) {
    return (0 < x1 * y2 - y1 * x2 ? 1 : -1);
}

int main() {
    double x[3], y[3], xp, yp;
    while (cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> xp >> yp) {
        int sum = 0;
        for (int i=0; i<3; ++i) {
            sum += z(x[(i+1)%3] - x[i], y[(i+1)%3] - y[i], xp - x[i], yp - y[i]);
        }
        cout << (abs(sum) == 3 ? "YES" : "NO") << endl;
    }
    return 0;
}
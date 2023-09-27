#include <algorithm>
#include <vector>
#include <complex>
using namespace std;
//---------------------------------------------------------------
using Point = complex<double>;
const double eps = 1e-10;
double cross(const Point &a, const Point &b) { return imag(conj(a) * b); }
//---------------------------------------------------------------

#include <iostream>
int main() {
    int n; cin >> n;
    while (n--) {
        vector<double> x(4), y(4);
        for (int i = 0; i < 4; i++) {
            cin >> x[i] >> y[i];
        }
        Point v[2] = {
            Point(x[0], y[0]) - Point(x[1], y[1]),
            Point(x[2], y[2]) - Point(x[3], y[3])
        };
        double res = cross(v[0], v[1]);
        cout << (abs(res) < eps ? "YES" : "NO") << endl;
    }
    return 0;
}

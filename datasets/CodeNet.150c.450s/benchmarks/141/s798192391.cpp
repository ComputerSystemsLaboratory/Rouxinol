#include <iostream>
using namespace std;

int main() {
    double x1, y1, x2, y2, x3, y3, xp, yp;

    while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp) {
        double xab = x2 - x1;
        double xbp = xp - x2;
        double xbc = x3 - x2;
        double xcp = xp - x3;
        double xca = x1 - x3;
        double xap = xp - x1;

        double yab = y2 - y1;
        double ybp = yp - y2;
        double ybc = y3 - y2;
        double ycp = yp - y3;
        double yca = y1 - y3;
        double yap = yp - y1;

        double za = xab * ybp - yab * xbp;
        double zb = xbc * ycp - ybc * xcp;
        double zc = xca * yap - yca * xap;

        if ((za < 0 && zb < 0 && zc < 0) || (za > 0 && zb > 0 && zc > 0)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

        if (cin.eof()) break;
    }

    return 0;
}
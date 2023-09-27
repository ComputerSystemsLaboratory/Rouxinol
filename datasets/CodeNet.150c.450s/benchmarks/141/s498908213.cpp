#include <iostream>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    double x[3], y[3], xp, yp;
    double ax, ay, bx, by;
    while (cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> xp >> yp) {
        int posi = 0, nega = 0;
        for (int i=0; i<3; ++i) {
            ax = x[(i+1)%3] - x[i];
            ay = y[(i+1)%3] - y[i];
            bx = xp - x[i];
            by = yp - y[i];
            if (ax * by - ay * bx > 0) {
                posi ++;
            } else {
                nega ++;
            }
        }
        if ( ! posi || ! nega) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

#define EPS 1e-10

int main() {
    int n; cin >> n;
    double x1, y1, x2, y2, x3, y3, x4, y4;
    for (int i = 0; i < n; i++) {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        if (abs(x1-x2) < EPS && abs(x3-x4) < EPS) {
//            if (abs(x1-x3) > EPS) cout << "YES" << endl;
//            else cout << "NO" << endl;
            cout << "YES" << endl;
            continue;
        }

        double s1 = (y2-y1)/(x2-x1);
        double s2 = (y4-y3)/(x4-x3);
        if ( abs(s1-s2) < EPS ) {
//            if ( abs((y1 - x1 * s1) - (y3 - x3 * s2)) < EPS ) {
//                cout << "NO" << endl;
//            } else {
//                cout << "YES" << endl;
//            }
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
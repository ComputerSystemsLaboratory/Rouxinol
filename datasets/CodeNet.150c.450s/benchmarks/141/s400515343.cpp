
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <numeric>
#include <cmath>
using namespace std;
typedef vector<int> VI;
#define REP( i, m, n ) for ( int i = (int)( m ); i < (int)( n ); ++i )


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<tuple<double, double, double>> zs;

    double x1, y1, x2, y2, x3, y3, xp, yp;
    while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp) {
        double z1 = (x3-x2)*(yp-y2)-(y3-y2)*(xp-x2);
        double z2 = (x1-x3)*(yp-y3)-(y1-y3)*(xp-x3);
        double z3 = (x2-x1)*(yp-y1)-(y2-y1)*(xp-x1);
        tuple<double, double, double> t(z1, z2, z3);
        zs.push_back(t);
    }

    for (auto z : zs) {
        if ((get<0>(z) > 0 && get<1>(z) > 0 && get<2>(z) > 0) || (get<0>(z) < 0 && get<1>(z) < 0 && get<2>(z) < 0)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>

using namespace std;

// 書き方程式を解く
// ax + by = c
// dx + ey = f
int main() {

    double a, b, c, d, e, f;
    vector<double> ansX;
    vector<double> ansY;
    
    double k1, k2, x, y;
    while (cin >> a >> b >> c >> d >> e >> f) {
        // (a * e)x + (e * b)y = (e * c)
        // (b * d)x + (b * e)y = (f * b)
        k1 = (e * c - f * b);
        k2 = (a * e - b * d);
        if (k1 == 0 && k2 < 0) k2 *= -1;
        x = k1 / k2;
        //(d * a)x + (d * b)y = (d * c)
        //(a * d)x + (a * e)y = (a * f)
        k1 = (d * c - a * f);
        k2 = (d * b - a * e);
        if (k1 == 0 && k2 < 0) k2 *= -1;
        y = k1 / k2;
        ansX.push_back(x);
        ansY.push_back(y);
    }
    
    for (int i = 0; i < ansX.size(); i++) {
        cout << fixed;
        cout << setprecision(3) << ansX[i] << " " << ansY[i] << endl;
    }
    
    return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;
int main(void){
    // Here your code !
    double a, b, c, d, e, f;
    while (cin >> a >> b >> c >> d >> e >> f) {
        double x = (c * e - b * f) / (a * e - b * d);
        double y = (a * f - c * d) / (a * e - b * d);
        x *= 1000; x = x + (x > 0 ? 0.5 : -0.5); x = (int)x;
        y *= 1000; y = y + (y > 0 ? 0.5 : -0.5); y = (int)y;
        //cout << %.3f %.3f\n << x / 1000 << y / 1000 << endl;
        cout << fixed << setprecision(3) << x /1000 << " " << y / 1000 <<endl;
    }
    return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    double a, b, c, d, e, f;
    double x, y;

    while (cin >> a >> b >> c >> d >> e >> f) {
        x = (double)(c*e - b*f)/(a*e - b*d);
        y = (double)(c*d - a*f)/(b*d - a*e);
        cout << setprecision(3) << setiosflags(ios::fixed);
        cout << x+0.0000000001 << ' ' << y+0.0000000001 << endl;
    }
    return 0;
}
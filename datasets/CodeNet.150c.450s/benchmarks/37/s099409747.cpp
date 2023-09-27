#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    double a, b, c, d, e, f;
    while(cin >>a >> b >> c >> d >> e >> f) {
        double g = a * e - b * d;
        double h = (e * c - b * f) / g + 0;
        double i = (-d * c + a * f) / g + 0;
        cout << fixed << setprecision(3) << h << " " << i << endl;
    }
    return 0;
}



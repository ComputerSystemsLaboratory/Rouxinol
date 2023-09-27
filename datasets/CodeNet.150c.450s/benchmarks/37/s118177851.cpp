#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, d, e, f;
    double x, y;
    while(cin >> a >> b >> c >> d >> e >> f)
    {
        x = round((c*e - b*f) / (a*e - b*d) * 1000) / 1000;
        y = round((a*f - c*d) / (a*e - b*d) * 1000) / 1000;
        x = x == -0. ? 0. : x;
        y = y == -0. ? 0. : y;
        cout    << fixed
                << setprecision(3)
                << x
                << " "
                << y
                << endl;
    }
}
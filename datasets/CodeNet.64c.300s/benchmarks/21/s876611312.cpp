#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, d, e, f;
    double answer1, answer2;

    while (cin >> a >> b >> c >> d >> e >> f) {
        answer1 = round((e * c - b * f) / (a * e - b * d) * 1000) / 1000;
        answer2 = round((-d * c + a * f) / (a * e - b * d) * 1000) / 1000;
        if (answer1 == 0) answer1 = 0.000;
        if (answer2 == 0) answer2 = 0.000;
        cout << fixed << setprecision(3) << answer1<< " " << answer2 << endl;
    }
    
    return 0;
}
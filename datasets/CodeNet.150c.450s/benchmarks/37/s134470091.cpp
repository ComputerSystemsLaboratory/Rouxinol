#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b, c, d, e, f;
    while(cin >> a >> b >> c >> d >> e >> f) {
        double ans_y = (c*d-f*a)/(b*d-e*a);
        double ans_x = (c - b*ans_y) / a;
        ans_x = static_cast<int>((ans_x * 10000 + 0.5)) / 10000.0;
        ans_y = static_cast<int>((ans_y * 10000 + 0.5)) / 10000.0;
        cout << fixed << setprecision(3) << ans_x << " " << ans_y << endl;
    }
}
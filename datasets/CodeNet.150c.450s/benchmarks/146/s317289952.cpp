#include    <iostream>
#include    <cmath>

using namespace std;

int main() {
    int n;
    double x1, y1, x2, y2, x3, y3, x4, y4;
    double da;

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

        da = (y2 - y1) * (x4 - x3) - (y4 - y3) * (x2 - x1);
        if(fabs(da) < 1e-10) { da = 0.0; }

        if(da == 0.0) { cout << "YES" << endl; }
        else { cout << "NO" << endl; }
    }

    return 0;
}

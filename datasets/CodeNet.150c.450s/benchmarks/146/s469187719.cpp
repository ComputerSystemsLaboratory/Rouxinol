#include <iostream>
#include <cmath>

using namespace std;

bool test (double x1, double y1, double x2, double y2) {
    return x1 * y2 == x2 * y1;
}

int main (void) {
    int n;
    cin >> n;
    while (n--) {
        double x1, x2, x3, x4, y1, y2, y3, y4;
        cin >> x1; cin >> y1;
        cin >> x2; cin >> y2;
        cin >> x3; cin >> y3;
        cin >> x4; cin >> y4;
        if (test(x1 - x2, y1 - y2, x3 - x4, y3 - y4)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
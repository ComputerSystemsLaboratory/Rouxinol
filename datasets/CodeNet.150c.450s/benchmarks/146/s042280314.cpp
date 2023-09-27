#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    double x1, y1, x2, y2, x3, y3, x4, y4;
    while (n--) {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        if (y1 == y2 && y3 == y4) {
            cout << "YES" << endl;
            continue;
        } else if (y1 == y2 || y3 == y4) {
            cout << "NO" << endl;
            continue;
        }
        double a = (x2 - x1) / (y2 - y1);
        double b = (x4 - x3) / (y4 - y3);
        if (abs(a - b) < 1e-8) {
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
    return 0;
}
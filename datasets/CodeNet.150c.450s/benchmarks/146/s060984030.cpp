#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        double x1, x2, x3, x4, y1, y2, y3, y4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        if (abs((x4 - x3) * (y2 - y1) - (x2 - x1) * (y4 - y3)) < 1e-10) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
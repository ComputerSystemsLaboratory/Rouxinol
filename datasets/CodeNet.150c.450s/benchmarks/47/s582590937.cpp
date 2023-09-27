
#include <iostream>
using namespace std;

int main() {
    int w, h, x, y, r, difX, difY;
    cin >> w >> h >> x >> y >> r;
    difX = w - x;
    difY = h - y;
    if ( x > 0 && y > 0 ) {
        if (difX >= r && difY >= r) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    } else {
        cout << "No" << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int W, H, x, y, r;
    cin >> W >> H >> x >> y >> r;

    if ((x - r) < 0) {
        cout << "No" << endl;
        return 0;
    }
    if (W < (x + r)) {
        cout << "No" << endl;
        return 0;
    }
    if ((y - r) < 0) {
        cout << "No" << endl;
        return 0;
    }
    if (H < (y + r)) {
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int w, h, x, y, r;
    int c_l, c_r, c_u, c_d;

    cin >> w >> h >> x >> y >> r;
    c_l = x - r;    // ????????????
    c_r = x + r;    // ????????????
    c_u = y + r;    // ????????????
    c_d = y - r;    // ????????????

    if (0 <= c_l && c_r <= w && 0 <= c_d && c_u <= h) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
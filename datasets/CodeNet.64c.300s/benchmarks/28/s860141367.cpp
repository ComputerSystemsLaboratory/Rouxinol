#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int rect_w, rect_h, x, y, r;
    cin >> rect_w >> rect_h >> x >> y >> r;

    if (0 <= x - r && x + r <= rect_w && 0 <= y - r && y + r <= rect_h) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
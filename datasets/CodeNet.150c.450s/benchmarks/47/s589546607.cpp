#include <iostream>

using namespace std;

int main(void) {

    int W, H, x, y, r;
    cin >> W >> H >> x >> y >> r;

    bool over = false;

    if (x + r > W || x - r < 0 || y + r > H || y - r < 0) over = true;

    cout << (over ? "No" : "Yes") << endl;

    return 0;
}


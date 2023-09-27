#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    int w, h, x, y, r;
    cin >> w >> h >> x >> y >> r;
    cout << (x >= r && x <= w - r && y >= r && y <= h - r ? "Yes" : "No") << endl;
    return 0;
}
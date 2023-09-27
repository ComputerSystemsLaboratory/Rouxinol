#include    <iostream>

using namespace std;

int main() {
    int W, H, x, y, r;

    cin >> W >> H >> x >> y >> r;
    cout << (((0 <= x-r && x+r <= W) && (0 <= y-r && y+r <= H)) ? ("Yes") : ("No")) << endl;

    return 0;
}

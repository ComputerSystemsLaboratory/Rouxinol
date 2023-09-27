#include <iostream>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int W, H, x, y, r;
    cin >> W >> H >> x >> y >> r;
    if (r <= x && x <= W-r && r <= y && y <= H-r)
        cout << "Yes\n";
    else
        cout << "No\n";
}
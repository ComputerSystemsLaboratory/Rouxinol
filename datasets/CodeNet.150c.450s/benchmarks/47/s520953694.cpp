#include <iostream>
using namespace std;

int main() {
    int W, H, x, y, r;
    char* str;
    cin >> W >> H >> x >> y >> r;
    if( x - r >= 0 && x + r <= W && y - r >= 0 && y + r <= H ) {
        str = "Yes";
    } else {
        str = "No";
    }
    cout << str << endl;
}
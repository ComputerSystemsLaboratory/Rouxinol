#include <iostream>
using namespace std;
 
int main(){
    int W, H, x, y, r;
    int minx, miny, maxx, maxy;
    cin >> W >> H >> x >> y >> r;

    minx = x - r;
    miny = y - r;
    maxx = x + r;
    maxy = y + r;

    if (minx < 0 || miny < 0 || maxx > W || maxy > H) {
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;
    return 0;
}
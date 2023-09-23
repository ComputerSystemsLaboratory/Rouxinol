#include <iostream>
using namespace std;
int main() {
    int W,H,x,y,r;
    cin >> W >> H >> x >> y >> r;
    cout << ((x-r < 0 || W < x+r || y-r < 0 || H < y+r) ? "No" : "Yes") << endl;
    return 0;
}
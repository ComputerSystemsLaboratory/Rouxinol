#include <iostream>

int main(){
    using namespace std;

    int W, H, x, y, r = 0;
    cin >> W >> H >> x >> y >> r;

    if( (r <= x) && ((x+r) <= W) &&
        (r <= y) && ((y+r) <= H) )
    {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
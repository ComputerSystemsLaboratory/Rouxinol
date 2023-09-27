#include <iostream>

using namespace std;

int main(void)
{
    int W, H, x, y, r;
    bool point = false;
    
    cin >> W >> H >> x >> y >> r;
    if (x + r <= W && x - r >= 0) {
        if (y + r <= H && y - r >= 0) {
            point = true;
        }
    }
    switch (point) {
        case true:
            cout << "Yes" << endl;
            break;
        case false:
            cout << "No" << endl;
            break;
    }
    
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int x, y;
    int r;
    int W;
    int H;

    do {
        cin >> W >> H >> x >> y >> r;
    } while ((x < -100 || x > 100) || (y < -100 || y > 100) || 
             (W <= 0 || W > 100) || (H <= 0 || H > 100) || (r <= 0 || r > 100));

    if ((x - r >= 0 && x + r <= W) && (y - r >= 0 && y + r <= H)) {
         cout << "Yes" << endl;
    } else {
         cout << "No" << endl;
    }

    return (0);
}
            
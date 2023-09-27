#include <iostream>
using namespace std;

int main()
{
    int w, h, x, y, r;
    cin >> w >> h >> x >> y >> r;
    if (x >= r && x <= w - r && y >= r && y <= h - r) {
        std::cout << "Yes\n";
    }
    else {
        std::cout << "No\n";
    }
}
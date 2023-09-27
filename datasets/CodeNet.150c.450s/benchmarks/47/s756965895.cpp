#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

int main(int argc, char* argv[])
{
    int W, H, x, y, r;
    cin >> W >> H >> x >> y >> r;
    if ((x - r) < 0 || (y - r) < 0 || (x + r) > W || (y + r) > H) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
}

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int w, h, x, y, r;
    cin >> w >> h >> x >> y >> r;
    int xmin = r;
    int xmax = w - r;
    int ymin = r;
    int ymax = h - r;
    string result = "No";
    if (xmin <= x && x <= xmax && ymin <= y && y <= ymax)
        result = "Yes";
    cout << result << endl;
    return 0;
}


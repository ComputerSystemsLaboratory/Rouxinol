#include <iostream>
using namespace std;

void checkCircleOnRectangle(int w, int h, int x, int y, int r)
{
    bool isOn = ((0 <= x - r && x + r <= w) && 
                 (0 <= y - r && y + r <= h));
    cout << (isOn ? "Yes" : "No") << endl;
}

int main()
{
    int w, h, x, y, r;
    cin >> w >> h >> x >> y >> r;
    checkCircleOnRectangle(w, h, x, y, r);
    
    return 0;
}
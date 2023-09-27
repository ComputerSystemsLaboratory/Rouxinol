#include <iostream>

using namespace std;

int main()
{
    int W,H,x,y,r;
    cin >> W >> H >> x >> y >> r;

    int maxX,minX,maxY,minY;
    maxX = x + r;
    minX = x - r;
    maxY = y + r;
    minY = y - r;
    
    if(maxX > W || minX < 0 || maxY > H || minY < 0)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }

    return 0;
}
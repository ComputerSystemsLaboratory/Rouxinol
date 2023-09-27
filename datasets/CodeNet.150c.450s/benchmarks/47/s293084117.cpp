#include <iostream>
using namespace std;

int main()
{
    int W, H , x, y, r;
    cin >> W >> H >> x >> y >> r;
    bool flag = true;
    if(x+r > W || y+r > H)
        flag = false;
    if(x - r < 0 || y - 0 < 0)
        flag = false;
    if(flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

}
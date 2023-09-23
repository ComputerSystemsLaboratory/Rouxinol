#include <iostream>
using namespace std;
int main()
{
    int x, y, z, tmp;

    cin >> x >> y >> z;

    if (x > y)
    {
        tmp = x;
        x = y;
        y = tmp;
    }
    if (y > z)
    {
        tmp = y;
        y = z;
        z = tmp;
    }
    if (x > y)
    {
        tmp = x;
        x = y;
        y = tmp;
    }

    cout << x << " " << y << " " << z << endl;
}

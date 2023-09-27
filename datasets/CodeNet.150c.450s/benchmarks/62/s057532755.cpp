#include <iostream>
#include <utility>
using namespace std;
int main()
{
    int x, y, z;

    cin >> x >> y >> z;

    if (x > y)
    {
        swap(x, y);
    }
    if (y > z)
    {
        swap(y, z);
    }
    if (x > y)
    {
        swap(x, y);
    }

    cout << x << " " << y << " " << z << endl;
}

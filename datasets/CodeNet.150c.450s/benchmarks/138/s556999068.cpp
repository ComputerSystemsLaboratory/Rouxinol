#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int x, y, z;
    cin >> x >> y;
    while(y != 0) {
        z = x % y;
        x = y;
        y = z;
    }
    cout << x << '\n';
    return 0;
}
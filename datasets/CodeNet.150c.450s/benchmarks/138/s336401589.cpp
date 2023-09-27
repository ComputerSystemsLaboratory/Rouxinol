#include <iostream>
using namespace std;

int gcd(int x, int y) {
    if (x < y) {
        return gcd(y, x);
    } else if (x >= y && y!=0) {
        return gcd(y, x % y);
    } else {
        return x;
    }
}

int main()
{
    int x, y;
    cin >> x >> y;
    cout << gcd(x, y) << endl;
    return 0;
}
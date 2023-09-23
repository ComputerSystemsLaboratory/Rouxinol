#include <iostream>

using namespace std;

int gcd(int x, int y)
{
    if (x < y) return gcd(y, x);
    if (!y) return x;
    return gcd(y, x % y);
}

int main(void)
{
    int X, Y;
    cin >> X >> Y;
    cout << gcd(X, Y) << endl;
    return 0;
}

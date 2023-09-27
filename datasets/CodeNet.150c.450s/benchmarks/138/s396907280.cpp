#include <iostream>

using namespace std;

int gcd(int x, int y)
{
    if(y == 0)
        return x;
    return gcd(y, x % y);
}

int main()
{
    int x = 0, y = 0;
    cin >> x >> y;
    int g = gcd(x, y);
    cout << g << endl;
    return 0;
}

#include <iostream>

using namespace std;

int W, H, x, y, r;

bool check_right()
{
    return (x + r) <= W;
}

bool check_left()
{
    return 0 <= (x - r);
}

bool check_upper()
{
    return (y + r) <= H;
}

bool check_lower()
{
    return 0 <= (y - r);
}

int main()
{
    cin >> W >> H >> x >> y >> r;

    cout << ((check_right() && check_left() && check_upper() && check_lower()) ?
            "Yes" : "No") << endl;

    return 0;
}
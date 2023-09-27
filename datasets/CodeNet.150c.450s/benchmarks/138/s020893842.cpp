#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char **argv)
{
        int x, y;
        cin >> x >> y;
        if (x < y)
                swap(x, y);
        while (y > 0) {
                int d = x % y;
                x = y;
                y = d;
        }
        cout << x << endl;
        return 0;
}
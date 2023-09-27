#include <iostream>
#include <vector>
#include <algorithm>
#include <initializer_list>

using namespace std;

int main()
{
    int m, e, y, z;
    int min;
    while (cin >> e, e) {
        m = min = 1000000;
        for (z = 0; z <= 100; z++) {
            if (z*z*z > e)
                break;
            for (y = 0; y <= 1000; y++) {
                if (y*y + z*z*z > e) {
                    y--;
                    m = y + z + (e-y*y-z*z*z);
                    min = m < min ? m : min;
                    break;
                }
            }
        }
        cout << min << endl;
    }

    return 0;
}
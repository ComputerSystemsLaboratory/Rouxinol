#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
    int x, y, z, e, m;
    while (cin >> e, e) {
        m = 1000000;
        for (z = 0; z * z * z <= e; ++z) {
            y = sqrt(e - z * z * z);
            x = e - z * z * z - y * y;
            m = min(m, x + y + z);
        }
        cout << m << endl;
    }
    return 0;
}
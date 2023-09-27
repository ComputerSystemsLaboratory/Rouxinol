#include <iostream>
#include <algorithm>
using namespace std;

int main ()
{
    int a, b, c;
    while (cin >> a >> b >> c, a || b || c) {
        int res = 0;
        for (int x = 1; x < 1000; x++) {
            for (int y = 1; y < 1000; y++) {
                if ((x * (100 + a) / 100) + (y * (100 + a) / 100) == c) {
                    res = max(res, (x * (100 + b) / 100) + (y * (100 + b) / 100)) ;
                }
            }
        }
        cout << res << endl;
    }

    return 0;
}
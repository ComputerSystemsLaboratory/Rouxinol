#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main ()
{
    int n, a, b, c, x;
    while (cin >> n >> a >> b >> c >> x, (n || a || b || c || x)) {
        int count = 0;
        for (int i = 0; i < n; i++) {
            int y;
            cin >> y;
            while (count < 10002) {
                if (y == x) {
                    break;
                } else {
                    x = (a * x + b) % c;
                    count++;
                }
            }
            if (i < n - 1) {
                x = (a * x + b) % c;
                count++;
            }
        }
        cout << (count <= 10000 ? count : -1) << endl;
    }

    return 0;
}
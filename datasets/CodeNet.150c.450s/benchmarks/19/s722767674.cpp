#include <iostream>
using namespace std;

int main(void) {
    int x, y;
    while (1) {
        cin >> x >> y;
        if (x == 0 && y == 0) break;
        cout << min(x, y) << ' ' << max(x, y) << endl;
    }
    return 0;
}
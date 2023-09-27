#include <iostream>
using namespace std;

int main(void) {
    int x, y, t;
    while (1) {
        cin >> x >> y;
        if (x == 0 && y == 0) {
            break;
        }
        else if (x > y) {t = x; x = y; y = t;}
        cout << x << " " << y << endl;

    }
    return 0;
}
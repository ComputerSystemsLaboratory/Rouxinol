#include <iostream>
using namespace std;

#define INIT    0
#define TRUE    1

int main() {

    int x   = INIT;
    int y   = INIT;
    int tmp = INIT;

    while (TRUE) {
        cin >> x;
        cin >> y;

        if ((x == 0) && (y == 0)) {
            break;
        }
        else {
            if (x > y) {
                tmp = x;
                x   = y;
                y   = tmp;
            }

            cout << x << " " << y << endl;
        }
    }
}
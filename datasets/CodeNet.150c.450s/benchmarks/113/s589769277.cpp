#include <iostream>
using namespace std;

#define START   1
#define INIT    0
#define TRUE    1

int main() {

    int iCounter    = START;
    int x           = INIT;

    while (TRUE) {
        cin >> x;
        if (x == INIT) {
            break;
        }
        else {
            cout << "Case " << iCounter << ": " << x << endl;
            iCounter++;
        }
    }
}
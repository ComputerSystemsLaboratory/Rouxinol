#include <iostream>
using namespace std;
 
int main() {
    int x, y;
    while (true) {
        cin >> x >> y;
        if ((x | y) != 0) {
            if (x < y) {
                cout << x << " " << y << endl;
            } else {
                cout << y << " " << x << endl;
            }
        } else {
            break;
        }
    }
    return 0;
}
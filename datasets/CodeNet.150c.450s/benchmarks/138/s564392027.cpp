#include <iostream>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    int r;

    if (x < y) {
        int temp = x;
        x = y;
        y = temp;
    }

    while (true) {
        r = x % y;        
        x = y;
        y = r;
        if (r == 0) break;
    }

    cout << x << endl;

    return 0;
}
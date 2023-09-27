#include <iostream>
using namespace std;

//
// Created by karayuu on 2018-12-22.
//

int main() {
    while (true) {
        int x, y;
        cin >> x >> y;

        if (x > y) {
            swap(x, y);
        }

        if (x == 0 && y == 0) {
            break;
        } else {
            cout << x << " " << y << endl;
        }
    }
}

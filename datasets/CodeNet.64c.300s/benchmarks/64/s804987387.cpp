#include <iostream>

using namespace std;

namespace {
    int greatest_common_divisor(int x, int y) {
        if (y == 1) {
            return 1;
        } else if (y == 0) {
            return x;
        } else if (x < y) {
            return greatest_common_divisor(y, x);
        } else {
            return greatest_common_divisor(y, x % y);
        }
    }
}

int main() {
    int x,y;
    cin >> x >> y;
    cout << greatest_common_divisor(x,y) << endl;
    return 0;
}
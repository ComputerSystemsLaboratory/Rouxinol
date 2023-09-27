#include <iostream>
using namespace std;

int GCD(int x, int y) {
    int temp;

    temp = y;
    y = x;
    x = temp;
    if (x % y == 0) {
        return y;
    }
    return GCD(x % y, y);
}

int main() {
    int x, y;
    cin >> x;
    cin >> y;
    cout << GCD(x, y) << "\n";
}
#include <iostream>
using namespace std;

void gcd(int x, int y) {
    int a = y % x;
    if (a == 0) {
        cout << x << endl;
    } else {
        gcd(a, x);
    }
}

int main() {

    int x, y;
    cin >> x >> y;

    x < y ? gcd(x, y) : gcd(y, x);

    return 0;
}
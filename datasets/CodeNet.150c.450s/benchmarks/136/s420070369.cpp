#include <iostream>
using namespace std;

long gcd(long x, long y) {
    long a = y % x;
    if (a == 0) {
        return x;
    } else {
        return gcd(a, x);
    }
}

int main() {

    long a, b;
    while (cin >> a >> b) {
        long g = a < b ? gcd(a, b) : gcd(b, a);
        long l = a * b / g;
        cout << g << " " << l << endl;
    }

    return 0;
}
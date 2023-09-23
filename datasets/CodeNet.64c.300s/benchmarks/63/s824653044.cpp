#include <iostream>

using namespace std;

int main() {
    long long a, b, r, mul;
    while (cin >> a >> b) {
        mul = a * b;
        while ((r = a % b) != 0) {
            a = b;
            b = r;
        }
        cout << b << " " << mul / b << endl;
    }

    return 0;
}
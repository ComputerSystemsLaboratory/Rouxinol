#include <iostream>

using namespace std;

int main() {
    int64_t a, b;

    cin >> a >> b;

    if (a < b) {
        int64_t temp = a;
        a = b;
        b = temp;
    }

    while (b != 0) {
        int64_t temp = a % b;
        a = b;
        b = temp;
    }

    cout << a << endl;

    return 0;
}
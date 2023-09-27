#include <iostream>

using namespace std;

int main() {
    uint16_t n, i = 1;

    cin >> n;

    while (1) {
        uint16_t x = i;
        if (x % 3 == 0)
            cout << " " << i;
        else
            while (1)
                if (x % 10 == 3) {
                    cout << " " << i;
                    break;
                } else {
                    x /= 10;
                    if (!x)
                        break;
                }
        if (++i > n)
            break;
    }

    cout << endl;

    return 0;
}
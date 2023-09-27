#include <iostream>
#include <string>
#include <numeric>

using namespace std;

int main() {
    string x;

    while (cin >> x) {
        if (x == "0") {
            break;
        }

        int32_t sum = accumulate(x.begin(), x.end(), 0, [](int32_t sum, int8_t c) {
            return sum + c - 48;
        });

        cout << sum << endl;
    }

    return 0;
}
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int debt = 100'000;

    while (n != 0) {
        debt *= 1.05;
        if (debt % 1000 != 0) {
            debt = (debt / 1000 + 1) * 1000;
        }
        --n;
    }

    cout << debt << endl;
}
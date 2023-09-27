#include <iostream>
#include <math.h>

using namespace std;

int debt = 100000;

int main() {
    int n;

    cin >> n;

    while (n--) {
        debt = ceil(debt * 1.05 / 1000) * 1000;
    }

    cout << debt << endl;

    return 0;
}
#include <iostream>
using namespace std;

int round(int x) {
    int y = x % 1000;
    if (y == 0) return x;
    else return x + 1000 - y;
}

int main() {

    int n;
    cin >> n;
    int debt = 100000;
    for (int i = 0; i < n; ++i) {
        debt *= 1.05;
        debt = round(debt);
    }

    cout << debt << endl;

    return 0;
}
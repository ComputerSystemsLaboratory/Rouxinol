#include <iostream>

using namespace std;


bool isDivisible3(int n) {
    return n % 3 == 0;
}

bool includes3(int n) {
    if (n % 10 == 3) {
        return true;
    } else {
        n /= 10;
        if (n) {
            return includes3(n);
        }
        return false;
    }
}

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        if (isDivisible3(i) || includes3(i)) {
            cout << ' ' << i;
        }
    }

    cout << endl;
    return 0;
}
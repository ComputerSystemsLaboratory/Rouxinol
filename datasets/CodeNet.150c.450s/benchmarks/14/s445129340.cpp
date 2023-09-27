#include <iostream>

using namespace std;

bool isInclude3(int n) {
    bool ret = false;

    for (int i = n; i > 0; i /= 10) {
        if (i % 10 == 3) {
            ret = true;
        }
    }

    return ret;
}

bool isDivide3(int n) {
    bool ret = (n % 3 == 0) ? true : false;

    return ret;
}

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        if (isDivide3(i) || isInclude3(i)) {
            cout << " " << i;
        }
    }

    cout << endl;

    return 0;
}
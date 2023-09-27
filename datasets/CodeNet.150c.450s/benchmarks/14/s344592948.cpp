#include <iostream>

using namespace std;

int isMultiplesOfThree(int n);

int isIncludingOfThree(int n);

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (isMultiplesOfThree(i) || isIncludingOfThree(i)) {
            cout << " " << i;
        }
    }

    cout << endl;
    return 0;
}

int isMultiplesOfThree(int n) {
    if (n % 3 == 0) {
        return true;
    } else {
        return false;
    }
}

int isIncludingOfThree(int n) {
    while (n) {
        if (n % 10 == 3) {
            return true;
        }
        n /= 10;
    }
    return false;
}
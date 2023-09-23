#include <iostream>

using namespace std;

int cache[31] = {};

void init() {
    cache[1] = 1;
    cache[2] = 2;
    cache[3] = 4;
}

int count(int n) {
    if (cache[n] != 0) return cache[n];
    if (n <= 0) return 0;
    return count(n-1) + count(n-2) + count(n-3);
}

int main() {
    int n;
    init();
    while (cin >> n) {
        if (n == 0) break;
        int days = count(n);
        if (days % 3650 == 0) {
            cout << days / 3650 << endl;
        } else {
            cout << days / 3650 + 1 << endl;
        }
    }
    return 0;
}
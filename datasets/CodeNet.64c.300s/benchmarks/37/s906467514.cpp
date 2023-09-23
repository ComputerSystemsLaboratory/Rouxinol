#include <iostream>

using namespace std;

int trinum[46];

void init() {
    trinum[0] = 1;
    for (int i = 1; i < 46; i++) {
        trinum[i] = trinum[i-1] + i + 1;
    }
}

int count(int n) {
    int total = 0;
    for (int i = 0; trinum[i] + 1 < n; i++) {
        if ((n - trinum[i]) % (i + 2) == 0) {
            total++;
        }
    }
    return total;
}

int main() {
    init();
    int n;
    while (cin >> n) {
        if (n == 0) break;
        cout << count(n) << endl;
    }
    return 0;
}
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, a[100] = { 0 }, maxv = 0;
    while (cin >> n) {
        a[n - 1]++;
        maxv = max(maxv, a[n - 1]);
    }
    for (int i = 0; i < 100; i++) {
        if (a[i] == maxv) {
            cout << i + 1 << endl;
        }
    }

    return 0;
}
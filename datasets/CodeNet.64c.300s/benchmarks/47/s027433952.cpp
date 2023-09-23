#include <iostream>
#include <algorithm>

using namespace std;

int main (void) {
    int t[100] = {0}, m = 0;
    while (1) {
        int n;
        cin >> n;
        if (cin.eof()) break;
        t[n - 1]++;
        m = max(m, t[n - 1]);
    }
    for (int i = 0; i < 100; i++) {
        if (t[i] == m) {
            cout << (i + 1) << endl;
        }
    }
    return 0;
}
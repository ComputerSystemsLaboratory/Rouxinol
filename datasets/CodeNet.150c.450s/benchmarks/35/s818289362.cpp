#include <iostream>
#include <climits>

using namespace std;

inline int max (int a, int b) {
    return a > b ? a : b;
}

int main (void) {
    int n, i, j;
    while (1) {
        cin >> n;
        if (n == 0) break;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        int sum = INT_MIN, s;
        for (i = 0; i < n; i++) {
            s = 0;
            for (j = i; j < n; j++) {
                s += a[j];
                sum = max(sum, s);
            }
        }
        cout << sum << endl;
    }
    return 0;
}
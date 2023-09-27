#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(void) {
    while (1) {
        int n;
        cin >> n;
        if (n == 0) break;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int mindif = 10000000;
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                mindif = min(mindif, abs(a[i] - a[j]));
            }
        }

        cout << mindif << endl;
    }
    return 0;
}

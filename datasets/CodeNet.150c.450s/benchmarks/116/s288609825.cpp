#include <iostream>
using namespace std;

int main() {
    while (true) {
        int n, k;
        cin >> n >> k;
        if ((n | k) == 0) {
            break;
        }
        int* a = new int [n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int* s = new int [n - k + 1];
        s[0] = 0;
        for (int i = 0; i < k; i++) {
            s[0] += a[i];
        }
        int maxS = s[0];
        for (int i = 1; i <= n - k; i++) {
            s[i] = s[i - 1] - a[i - 1] + a[i + k - 1];
            if (maxS < s[i]) {
                maxS = s[i];
            }
        }
        cout << maxS << endl;
        delete[] a;
        delete[] s;
    }
}
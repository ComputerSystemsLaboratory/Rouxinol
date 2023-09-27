#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    while (true) {
        int n, r, a[50];

        cin >> n >> r;
        if ( n == 0 && r == 0) { break; }

        for (int i = 0; i < n; i++) {
            a[i] = n-i;
        }

        while (r--) {
            int p, c;
            cin >> p >> c;
            rotate(a, a+p-1, a+p+c-1);
        }

        cout << a[0] << endl;
    }

    return 0;
}

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int a[3];
        for (int i = 0; i < 3; i++) {
            cin >> a[i];
        }
        sort(a, a + 3);

        if (a[2] * a[2] == a[0] * a[0] + a[1] * a[1]) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        int x = i;
        if (x % 3 == 0) {
            cout << " " << i;
            continue;
        }
        if (x % 10 == 3) {
            cout << " " << i;
            continue;
        }
        x /= 10;
        for (;;) {
            if (x) {
                if (x % 10 == 3) {
                    cout << " " << i;
                    break;
                }
                x /= 10;
            } else {
                break;
            }
        }
    }
    cout << endl;
}
#include <iostream>
#include <sstream>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    while (n--) {
        int a = 0, b = 0;
        bool ok = true;
        for (int j=0; j<10; ++j) {
            cin >> x;
            if (a < x && b < x) {
                if (a < b) {
                    b = x;
                } else {
                    a = x;
                }
            } else if (a < x) {
                a = x;
            } else if (b < x) {
                b = x;
            } else {
                ok = false;
            }
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}
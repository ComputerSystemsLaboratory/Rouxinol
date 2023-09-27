#include <iostream>
#include <vector>

using namespace std;

int main (void) {
    while (1) {
        vector<int> a(4), b(4);
        for (int i = 0; i < 4; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < 4; i++) {
            cin >> b[i];
        }
        if (cin.eof()) break;
        int hi = 0, bl = 0;
        for (int i = 0; i < 4; i++) {
            if (a[i] == b[i]) {
                hi++;
            } else {
                for (int j = 0; j < 4; j++) {
                    if (b[i] == a[j]) {
                        bl++;
                        break;
                    }
                }
            }
        }
        cout << hi << ' ' << bl << endl;
    }
    return 0;
}
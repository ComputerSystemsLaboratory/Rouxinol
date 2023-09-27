#include <iostream>
using namespace std;

int main() {
    int n, card[13 * 4 + 1] = {};

    cin >> n;
    for (int i = 0; i < n; i++) {
        char s;
        int r;
        cin >> s >> r;
        switch (s) {
            case 'S': card[13 * 0 + r] = 1; break;
            case 'H': card[13 * 1 + r] = 1; break;
            case 'C': card[13 * 2 + r] = 1; break;
            case 'D': card[13 * 3 + r] = 1; break;
        }
    }

    for (int i = 1; i <= 13 * 4; i++) {
        if (card[i] == 0) {
            if (i <= 13 * 1) {
                cout << "S";
            } else if (i <= 13 * 2) {
                cout << "H";
            } else if (i <= 13 * 3) {
                cout << "C";
            } else {
                cout << "D";
            }
            cout << " " << (i - 1) % 13 + 1 << endl;  // i % 13 とすると、0 ~ 12
        }
    }

    return 0;
}

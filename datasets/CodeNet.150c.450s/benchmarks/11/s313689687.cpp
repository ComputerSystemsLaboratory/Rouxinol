#include <iostream>
using namespace std;

int main()
{
    int n, r;
    char ch;
    int s[13] = {0}, h[13] = {0}, c[13] = {0}, d[13] = {0};

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> ch >> r;

        if (ch == 'S') {
            s[r - 1] = 1;
        } else if (ch == 'H') {
            h[r - 1] = 1;
        } else if (ch == 'C') {
            c[r - 1] = 1;
        } else if (ch == 'D') {
            d[r - 1] = 1;
        }
    }

    for (int i = 0; i < 13; i++) {
        if (s[i] != 1) {
            cout << "S " << i + 1 << endl;
        }
    }
    for (int i = 0; i < 13; i++) {
        if (h[i] != 1) {
            cout << "H " << i + 1 << endl;
        }
    }
    for (int i = 0; i < 13; i++) {
        if (c[i] != 1) {
            cout << "C " << i + 1 << endl;
        }
    }
    for (int i = 0; i < 13; i++) {
        if (d[i] != 1) {
            cout << "D " << i + 1 << endl;
        }
    }

    return 0;
}
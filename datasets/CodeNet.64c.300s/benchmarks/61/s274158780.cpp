#include<iostream>
using namespace std;
int main() {
    int r, c;
    long long x[101][101];
    cin >> r >> c;
    for (int yoko = 0; yoko < r; yoko++) {
        x[yoko][c] = 0;
        for (int tate = 0; tate < c; tate++) {
            cin >> x[yoko][tate];
            x[yoko][c] += x[yoko][tate];
        }
    }
    for (int tate = 0; tate <= c; tate++) {
        x[r][tate] = 0;
        for (int yoko = 0; yoko < r; yoko++) {
            x[r][tate] += x[yoko][tate];
        }
    }
    for (int yoko = 0; yoko <= r; yoko++) {
        for (int tate = 0; tate <= c; tate++) {
            if (tate<c) {
                cout << x[yoko][tate] << " ";
            }
            else {
                cout << x[yoko][tate];
            }
        }
        cout << endl;
    }
    return 0;
}
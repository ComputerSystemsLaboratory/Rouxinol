#include<iostream>

using namespace std;

int main() {
    int r, c;
    int X[101][101] = {0};

    cin >> r >> c;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> X[i][j];
            X[i][c] += X[i][j];
            X[r][j] += X[i][j];
            X[r][c] += X[i][j];
        }
    }

    for (int i = 0; i <= r; i++) {
        for (int j = 0; j <= c; j++) {
            if (j > 0) {
                cout << " ";
            }
            cout << X[i][j];
        }
        cout << endl;
    }

    return 0;
}

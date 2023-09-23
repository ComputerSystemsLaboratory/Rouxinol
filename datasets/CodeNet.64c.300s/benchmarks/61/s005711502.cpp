
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main() {
    int r, c, total;
    cin >> r >> c;
    int data[r+1][c+1];

    for (int i = 0; i < r; i++) {
        total = 0;
        for (int j = 0; j < c; j++) {
            cin >> data[i][j];
            total += data[i][j];
        }
        data[i][c] = total;
    }

    for (int i = 0; i <= c; i++) {
        data[r][i] = 0;
    }

    for (int i = 0; i < r+1; i++) {
        for (int j = 0; j < c+1; j++) {
            if (i != r) {
                data[r][j] += data[i][j];
            }
            if (j != c) {
                cout << data[i][j] << " ";
            } else {
                cout << data[i][j] << endl;
            }
        }
    }
    return 0;
}
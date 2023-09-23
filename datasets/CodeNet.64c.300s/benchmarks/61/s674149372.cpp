#include<iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    int numbers[r + 1][c + 1];
    for (int j = 0; j <= c; j++) {
        numbers[r][j] = 0;
    }

    for (int i = 0; i < r; i++) {
        numbers[i][c] = 0;
        for (int j = 0; j < c; j++) {
            cin >> numbers[i][j];
            numbers[i][c] += numbers[i][j];
            numbers[r][j] += numbers[i][j];
            numbers[r][c] += numbers[i][j];
        }
    }

    for (int i = 0; i <= r; i++) {
        for (int j = 0; j < c; j++) {
            cout << numbers[i][j] << " ";
        }
        cout << numbers[i][c] << endl;
    }

    return 0;
}
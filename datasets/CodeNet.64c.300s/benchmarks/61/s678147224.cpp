#include <iostream>
using namespace std;

int main() {
    int a[101][101] = {};
    int r, c;
    cin >> r >> c;
    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            a[i][c] += a[i][j];
            a[r][j] += a[i][j];
            a[r][c] += a[i][j];
        }
    }

    for (int i = 0; i < r + 1; i++) {
        for (int j = 0; j < c + 1; j++) {
            cout << a[i][j];
            if (j < c)  cout << " ";
        }
        cout << endl;
    }
    return 0;
}


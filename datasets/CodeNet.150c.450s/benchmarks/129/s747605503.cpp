#include <iostream>
using namespace std;

int main(void) {
    int r, c, i, j;
    cin >> r >> c;
    int m[r+1][c+1];
    
    for (i = 0; i <= c; i++) m[r][i] = 0;
    for (i = 0; i <= r; i++) m[i][c] = 0;

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cin >> m[i][j];
            m[i][c] += m[i][j];
            m[r][j] += m[i][j];
        }
        m[r][c] += m[i][c];
    }

    for (i = 0; i <= r; i++) {
        for (j = 0; j <= c; j++) {
            cout << m[i][j];
            if (j == c) cout << endl;
            else cout << " ";
        }
    }
    return 0;
}
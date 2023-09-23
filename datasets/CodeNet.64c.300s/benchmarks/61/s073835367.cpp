#include <iostream>
using namespace std;

int main()
{
    int r, c;
    int m[101][101] = {0};

    cin >> r >> c;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> m[i][j];
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            m[i][c] += m[i][j];
            m[r][j] += m[i][j];
            m[r][c] += m[i][j];
        }
    }

    for (int i = 0; i < r + 1; i++) {
        for (int j = 0; j < c + 1; j++) {
            if (j == c) {
                cout << m[i][j];
            } else {
                cout << m[i][j] << ' ';
            }
        }

        cout << endl;
    }

    return 0;
}
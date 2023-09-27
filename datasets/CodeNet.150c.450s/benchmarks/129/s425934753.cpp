#include <iostream>

using namespace std;

int main() {
    int r,c;
    cin >> r >> c;

    int sheet[r+1][c+1];

    for (int i = 0; i <= r ; i++) {
        for (int j = 0; j <= c; j++) {
            sheet[i][j] = 0;
        }
    }

    for (int i = 0; i < r ; i++) {
        for (int j = 0; j < c ; j++) {
            int in;
            cin >> in;

            sheet[i][j] = in;
            sheet[i][c] += in;
            sheet[r][j] += in;
            sheet[r][c] += in;
        }
    }
    for (int i = 0; i <= r ; i++) {
        for (int j = 0; j <= c; j++) {
            cout << sheet[i][j];
            if (j != c)
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
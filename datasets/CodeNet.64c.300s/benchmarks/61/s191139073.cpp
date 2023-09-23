#include <iostream>

using namespace std;

int main(void){
    int r, c;
    cin >> r >> c;
    int cell[r+1][c+1];
    int sum_r, sum_c;
    for (int i = 0; i < r; i++) {
        sum_r = 0;
        for (int j = 0; j < c; j++) {
            cin >> cell[i][j];
            sum_r += cell[i][j];
        }
        cell[i][c] = sum_r;
    }
    for (int i = 0; i <= c; i++) {
        sum_c = 0;
        for (int j = 0; j < r; j++) {
            sum_c += cell[j][i];
        }
        cell[r][i] = sum_c;
    }
    for (int i = 0; i <= r; i++) {
        for (int j = 0; j <= c; j++) {
            cout << cell[i][j];
            if (j < c) cout << " ";
        }
        cout << endl;
    }
}
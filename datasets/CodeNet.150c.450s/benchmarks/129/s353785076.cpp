#include <iostream>

using namespace std;

int main(void)
{
    u_int r, c;
    cin >> r >> c;
    u_int sheet[r+1][c+1];
    for (u_int i = 0; i <= c; i++)
        sheet[r][i] = 0;
    
    for (u_int i = 0; i < r; i++) {
        sheet[i][c] = 0;
        for (u_int j = 0; j < c; j++) {
            cin >> sheet[i][j];
            sheet[i][c] += sheet[i][j];
            sheet[r][j] += sheet[i][j];
        }
    }

    for (u_int i = 0; i < c; i++)
        sheet[r][c] += sheet[r][i];

    for (u_int i = 0; i <= r; i++) {
        for (u_int j = 0; j < c; j++)
            printf("%d ", sheet[i][j]);
        printf("%d\n", sheet[i][c]);
    }
    
    return 0;
}
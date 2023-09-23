#include<iostream>
using namespace std;

int main()
{
    int r, c, i, j;

    int A[101][101];
    cin >> r >> c;

    for(i = 0; i < r; i++) A[i][c] = 0;
    for(j = 0; j < c; j++) A[r][j] = 0;
    A[r][c] = 0;

    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            cin >> A[i][j];
            A[i][c] = A[i][c] + A[i][j];
            A[r][j] = A[r][j] + A[i][j];
            A[r][c] = A[r][c] + A[i][j];
        }
    }

    for(i = 0; i <= r; i++){
        for(j = 0; j < c; j++){
            cout << A[i][j] << " ";
        }
        cout << A[i][c] << endl;
    }
    
    return 0;
}
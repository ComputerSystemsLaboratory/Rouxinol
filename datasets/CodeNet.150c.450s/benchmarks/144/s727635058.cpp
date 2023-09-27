#include <iostream>

using std::cout;
using std::cin;
using std::endl;


constexpr int MAX = 100;

int main()
{
    int in_mat1_row, in_mat1_col, in_mat2_row, in_mat2_col;
    cin >> in_mat1_row >> in_mat1_col >> in_mat2_col;
    in_mat2_row = in_mat1_col;

    int in_mat1[MAX][MAX];
    for (int i = 0; i < in_mat1_row; i++) {
        for (int j = 0; j < in_mat1_col; j++) {
            cin >> in_mat1[i][j];
        }
    }

    int in_mat2[MAX][MAX];
    for (int i = 0; i < in_mat2_row; i++) {
        for (int j = 0; j < in_mat2_col; j++) {
            cin >> in_mat2[i][j];
        }
    }

    long out_mat[MAX][MAX];
    for (int i = 0; i < in_mat1_row; i++) {
        for (int j = 0; j < in_mat2_col; j++) {
            out_mat[i][j] = 0;
            for (int k = 0; k < in_mat1_col; k++) {
                out_mat[i][j] += in_mat1[i][k] * in_mat2[k][j];
            }
            if (j != 0) {
                cout << " ";
            }
            cout << out_mat[i][j];
        }
        cout << endl;
    }

    return 0;
}
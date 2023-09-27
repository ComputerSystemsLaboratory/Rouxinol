#include <iostream>
#include <array>
#include <limits>

using namespace std;

struct MatrixDims {
    int row;
    int col;
    MatrixDims() {}
    MatrixDims(int row, int col) : row(row), col(col) {}
};

array<MatrixDims, 100> matrix_dims;
array<array<int, 100>, 100> dp;

int get_min(int row, int col) {
    int min = numeric_limits<int>::max();
    for (int j = row; j < col; ++j) {
        int sum = dp[row][j] + dp[j+1][col] + matrix_dims[row].row * matrix_dims[j].col * matrix_dims[col].col;
        if (sum < min) min = sum;
    }
    return min;
}

int main()
{
    int n;
    cin >>  n;
    for (int i = 0; i < n; ++i) {
        int row, col;
        cin >> row >> col;
        matrix_dims[i] = MatrixDims(row, col);
    }
    dp.fill({});
    
    for (int endpt = 1; endpt < n; ++endpt) {
        for (int diag_i = 0; (endpt + diag_i) < n; ++diag_i) {
            dp[diag_i][diag_i + endpt] = get_min(diag_i, endpt + diag_i);
        }
    }
    cout << dp[0][n-1] << endl;
}

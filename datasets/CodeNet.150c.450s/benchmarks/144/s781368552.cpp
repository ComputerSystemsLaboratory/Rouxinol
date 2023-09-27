/* ITP1_7_D: Matrix Multiplication */

#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);

    int row, col;
    int n_a_row, n_a_col, n_b_col;
    std::cin >> n_a_row >> n_a_col >> n_b_col;

    long long A[n_a_row][n_a_col];
    long long B[n_a_col][n_b_col];
    long long C[n_a_row][n_b_col];

    for (int row = 0; row < n_a_row; row++)
        for (int col = 0; col < n_a_col; col++)
            std::cin >> A[row][col];

    for (int row = 0; row < n_a_col; row++)
        for (int col = 0; col < n_b_col; col++)
            std::cin >> B[row][col];

    // Multiply two matrixes.
    for (int b_col = 0; b_col < n_b_col; b_col++) {
        for (int a_row = 0; a_row < n_a_row; a_row++) {
            C[a_row][b_col] = 0;
            for (int a_col = 0; a_col < n_a_col; a_col++) {
                C[a_row][b_col] += A[a_row][a_col] * B[a_col][b_col];
            }
        }
    }

    // Output result.
    for (int row = 0; row < n_a_row; row++) {
        std::cout << C[row][0];
        for (int col = 1; col < n_b_col; col++)
            std::cout << " " << C[row][col];
        std::cout << "\n";
    }

    return 0;
}
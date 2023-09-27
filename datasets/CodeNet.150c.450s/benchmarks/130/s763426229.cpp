/* ITP1_6_D: Mtrix Vector Multiplication */

#include <iostream>

int main() {
    int row, col;
    std::cin >> row >> col;

    int matrix[row][col];
    int cvector[row];

    // Read the matrix.
    for (int i_r = 0; i_r < row; i_r++) {
        for (int i_c = 0; i_c < col; i_c++) {
            std::cin >> matrix[i_r][i_c];
        }
    }

    // Read the column vector.
    for (int i_c = 0; i_c < col; i_c++) {
        std::cin >> cvector[i_c];
    }

    // Output results.
    for (int i_r = 0; i_r < row; i_r++) {
        int ans_row = 0;
        for (int i_c = 0; i_c < col; i_c++) {
            ans_row += matrix[i_r][i_c] * cvector[i_c];
        }
        std::cout << ans_row << std::endl;
    }

    return 0;
}
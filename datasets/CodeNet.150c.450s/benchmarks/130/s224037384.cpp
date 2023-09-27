#include <iostream>

constexpr int MAX = 100;

int main()
{
    int row, column;
    std::cin >> row >> column;

    int in_mat[MAX][MAX];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            std::cin >> in_mat[i][j];
        }
    }

    int in_vec[MAX];
    for (int j = 0; j < column; j++) {
        std::cin >> in_vec[j];
    }

    int out_vec[MAX];
    for (int i = 0; i < row; i++) {
        out_vec[i] = 0;
        for (int j = 0; j < column; j++) {
            out_vec[i] += in_mat[i][j] * in_vec[j];
        }
        std::cout << out_vec[i] << std::endl;
    }

    return 0;
}
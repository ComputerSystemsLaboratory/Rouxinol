//
// Created by tac on 2016/10/14.
//

#include <cstdlib>
#include <iostream>

namespace  {
const int R_SIZE = 100 + 1;
const int C_SIZE = 100 + 1;

int arr[R_SIZE][C_SIZE] {};

}

int main() {
    int r, c;

    std::cin >> r >> c;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            std::cin >> arr[i][j];
            arr[i][c] += arr[i][j];
            arr[r][j] += arr[i][j];
            arr[r][c] += arr[i][j];
        }
    }

    for (int i = 0; i < r + 1; ++i) {
        std::string sep {""};
        for (int j = 0; j < c + 1; ++j) {
            std::cout << sep << arr[i][j];
            sep = " ";
        }
        std::cout << std::endl;
    }

    return EXIT_SUCCESS;
}
//
// Created by tac on 2016/10/14.
//

#include <cstdlib>
#include <iostream>

namespace {
const int N_SIZE = 100;
const int M_SIZE = 100;
const int L_SIZE = 100;

long ma[N_SIZE][M_SIZE] {};
long mb[M_SIZE][L_SIZE] {};
long mc[N_SIZE][L_SIZE] {};

}

int main() {
    int n, m, l;

    // input
    std::cin >> n >> m >> l;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cin >> ma[i][j];
        }
    }
    for (int j = 0; j < m; ++j) {
        for (int k = 0; k < l; ++k) {
            std::cin >> mb[j][k];
        }
    }

    // calculate
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < l; ++j) {
            for (int k = 0; k < m; ++k) {
                mc[i][j] += ma[i][k] * mb[k][j];
            }
        }
    }

    // output
    for (int i = 0; i < n; ++i) {
        std::string sep {};
        for (int k = 0; k < l; ++k) {
            std::cout << sep << mc[i][k];
            sep = " ";
        }
        std::cout << std::endl;
    }

    return EXIT_SUCCESS;
}
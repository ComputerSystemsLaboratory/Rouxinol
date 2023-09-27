//
// Created by tac on 2016/10/12.
//

#include <cstdlib>
#include <string>
#include <iostream>

const int B_SIZE = 4;
const int F_SIZE = 3;
const int R_SIZE = 10;

static int residents[B_SIZE + 1][F_SIZE + 1][R_SIZE + 1];

int main() {
    for (int b = 1; b <= B_SIZE; ++b) {
        for (int f = 1; f <= F_SIZE; ++f) {
            for (int r = 1; r <= R_SIZE; ++r) {
                residents[b][f][r] = 0;
            }
        }
    }

    int n;
    int b, f, r, v;
    std::cin >> n;
    for (int i = 0; i < n; ++ i) {
        std::cin >> b >> f >> r >> v;
        residents[b][f][r] += v;
    }

    bool is_sep_b {false};
    for (int b = 1; b <= B_SIZE; ++b) {
        if (is_sep_b) {
            std::cout << "####################" << std::endl;
        }
        is_sep_b = true;
        for (int f = 1; f <= F_SIZE; ++f) {
            for (int r = 1; r <= R_SIZE; ++r) {
                std::cout << " ";
                std::cout << residents[b][f][r];
            }
            std::cout << std::endl;
        }

    }

    return EXIT_SUCCESS;
}
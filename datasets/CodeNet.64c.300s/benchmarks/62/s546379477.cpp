//
// Created by tac on 2016/10/12.
//

#include <cstdlib>
#include <iostream>

int main() {
    int n, m;

    std::cin >> n >> m;
    int* a = new int[n * m];
    int* b = new int[m];
    int * c = new int[n];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            a[(i * m) + j] = 0;
            b[j] = 0;
            c[i] = 0;
        }
    }

    int e;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cin >> e;
            a[(i * m) + j] = e;
        }
    }
    for (int j = 0; j < m; ++j) {
        std::cin >> e;
        b[j] = e;
    }

//    std::cout << "a = " << std::endl;
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            std::cout << " " << a[(i * m) + j];
//        }
//        std::cout << std::endl;
//    }
//    std::cout << " b = " << std::endl;
//    for (int j = 0; j < m; ++j) {
//        std::cout << " " << b[j];
//        std::cout << std::endl;
//    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            c[i] += a[(i * m) + j] * b[j];
        }
    }

    for (int i = 0; i < n; ++i) {
        std::cout << c[i] << std::endl;
    }

    delete[] a;
    delete[] b;
    return EXIT_SUCCESS;
}
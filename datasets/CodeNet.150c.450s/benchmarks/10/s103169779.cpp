#include <iostream>
int main() {
    int b, f, r, v, z[5][4][11] = { 0 };
    std::string s = { "####################" };
    std::cin >> b; // skip
    while (std::cin >> b >> f >> r >> v) {
        z[b][f][r] += v;
    }
    for (int i = 1; i < 5; ++i) {
        if (i != 1) {
            std::cout << s << std::endl;
        }
        for (int j = 1; j < 4; ++j) {
            for (int k = 1; k < 11; ++k) {
                std::cout << ' ' << z[i][j][k];
            }
            std::cout << std::endl;
        }
    }
}


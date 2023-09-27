#include <iostream>

int main()
{
    int buf[4][3][10] = {};
    int n;
    std::cin >> n;
    int b, f, r, v;
    for (int i = 0; i < n; i++) {
        std::cin >> b >> f >> r >> v;
        buf[b-1][f-1][r-1] += v;
    }

    for (b = 0; b < 4; b++) {
        for (f = 0; f < 3; f++) {
            for (r = 0; r < 10; r++) {
                std::cout << ' ' << buf[b][f][r];
            }
            std::cout << std::endl;
        }
        if (b != 3) {
            std::cout << "####################" << std::endl;
        }
    }
    return 0;
}
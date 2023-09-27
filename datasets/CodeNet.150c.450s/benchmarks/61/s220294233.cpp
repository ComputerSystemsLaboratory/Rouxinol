#include <iostream>
#include <cstdlib>
#include <vector>

int main(void) {
    int N;
    int A;
    int B;
    int C;
    int X;
    int next_X;
    int Y;
    int next_Y;
    int flame_num;

    std::cin >> N;
    while (N != 0) {
        Y = -2;
        flame_num = 0;
        std::cin >> A >> B >> C >> X;
        for (int i = 0; i < N; i++) {
            std::cin >> next_Y;
            if (next_Y == Y) {
                flame_num++;
                next_X = (A * X + B) % C;
                X = next_X;
            }
            Y = next_Y;
            while (Y != X) {
                flame_num++;
                next_X = (A * X + B) % C;
                X = next_X;
                if (flame_num > 10000) {
                    break;
                }
            }
        }

        if (flame_num > 10000) {
            std::cout << "-1" << std::endl;
        }

        if (flame_num <= 10000) {
            std::cout << flame_num << std::endl;
        }
        std::cin >> N;
    }

    return EXIT_SUCCESS;
}
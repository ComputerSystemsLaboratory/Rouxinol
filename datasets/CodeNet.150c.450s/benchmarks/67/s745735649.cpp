#include <iostream>
#include <cstdlib>

int maximize(int N) {
    int total = 0;
    int i = 0;
    while (total <=  N) {
        i++;
        total += i; 
    }
    return i - 1;
}

void calc(int N, int Max) {
    int discovery = 0;
    for (int i = 2; i <= Max + 1; i++) {
        for (int j = 1; j < N / i + 1; j++) {
            if ((j + i - 1) * (j + i) - (j - 1) * j == 2 * N) {
                discovery++;
                break;
            }
        }
    }
    std::cout << discovery << std::endl;
    return;
}

int main(void) {
    int N;
    std::cin >> N;

    while (N != 0) {
        int Max = maximize(N);
        calc(N, Max);
        std::cin >> N;
    }
    return EXIT_SUCCESS;
}
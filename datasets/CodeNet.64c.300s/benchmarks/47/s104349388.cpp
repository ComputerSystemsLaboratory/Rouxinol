#include <iostream>

int main(void) {
    int a;
    int count[100] = {};
    int max = 0;
    while(std::cin >> a) {
        count[a - 1]++;
    }
    for (int i = 0; i < 100; i++) {
        if (count[i] > max) {
            max = count[i];
        }
    }

    for (int i = 0; i < 100; i++) {
        if (count[i] ==  max) {
            std::cout << i + 1 << std::endl;
        }
    }
    return 0;
}
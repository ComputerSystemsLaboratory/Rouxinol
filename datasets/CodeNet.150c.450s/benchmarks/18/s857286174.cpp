#include <iostream>

int main(void) {
    int n;
    std::cin >> n;
    int cost = 100000;
    double cost_temp;

    for (int i = 0; i < n; i++) {
        cost_temp = cost * 1.05;
        cost = cost_temp;
        if (cost % 1000 != 0) {
            cost += 1000;
        }
        cost = (cost / 1000) * 1000;
    }
    std::cout << cost << std::endl;

    return 0;
}
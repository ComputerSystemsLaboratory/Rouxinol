#include <iostream>
#include <iomanip>
#include <vector>

void calc(std::vector<double> first, std::vector<double> second) {
    double div;

    div = second[0] / first[0];
    second[0] = 0;
    second[1] -= first[1] * div;
    second[2] -= first[2] * div;
    second[2] /= second[1];
    second[1] = 1;

    first[2] -= first[1] * second[2];
    first[1] = 0;
    first[2] /= first[0];
    first[0] = 1;

    std::cout << std::fixed << std::setprecision(3) << first[2] << " " << second[2] << std::endl;
    return;
}

int main(void) {
    std::vector<double> first(3, 0);
    std::vector<double> second(3, 0);
    while(std::cin >> first[0]) {
        for (int i = 1; i < 3; i++) {
            std::cin >> first[i];
        }
        for (int i = 0; i < 3; i++) {
            std::cin >> second[i];
        } 
        calc(first, second);
    }
    return 0;
}
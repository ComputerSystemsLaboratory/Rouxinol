#include <iostream>


double func(double input) {
    return input * input;
}

double integral(double h, double min_x = 0, double max_x = 600) {
    double sum = 0;
    for (double x = min_x; x < max_x; x+= h) {
        sum += func(x) * h;
    }
    return sum;
}

int main()
{
    int input;
    while(std::cin >> input) {
        std::cout << (int)integral(input) << std::endl;
    }
    return 0;
}
#include <iostream>

int main(void)
{
    int a, b, c;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    int num_of_divisors = 0;
    for(int i = a; i <= b; ++i) {
        if (c % i == 0) {
            ++num_of_divisors;
        }
    }
    std::cout << num_of_divisors << std::endl;
    return 0;
}
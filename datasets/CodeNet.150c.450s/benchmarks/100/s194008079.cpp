#include <iostream>

int main(void)
{
    int n;
    std::cin >> n;

    long long unsigned int result = 1;
    for ( ; n > 0; n--) {
        result *= n;
    }

    std::cout << result << std::endl;
    return 0;
}
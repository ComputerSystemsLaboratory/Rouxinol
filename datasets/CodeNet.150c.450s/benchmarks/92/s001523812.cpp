#include <iostream>
#include <string>

int main() {
    long long int a, b;

    while (std::cin >> a >> b) {
        std::cout << std::to_string(a + b).size() << std::endl;
    } 

    return 0;
}
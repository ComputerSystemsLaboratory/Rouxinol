#include <cstdio>
#include <iostream>

bool is_prime(int number)
{
    if(number < 2) {
        return false;
    }

    for(int i = 2; i * i <= number; i++) {
        if(number % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    int input_size;
    int counter = 0;
    std::cin >> input_size;
    for(int i = 0; i < input_size; i++) {
        int number;
        std::cin >> number;
        if(is_prime(number)) {
            counter++;
        }
    }
    printf("%d\n", counter);
    return 0;
}
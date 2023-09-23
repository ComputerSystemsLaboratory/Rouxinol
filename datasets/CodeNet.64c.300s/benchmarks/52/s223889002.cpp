#include <iostream>

int sumOfIntegers(int min, int num, int sum);

int main()
{
    int num, sum;

    while (true) {
        std::cin >> num >> sum;

        if (num == 0 && sum == 0) {
            break;
        }

        std::cout << sumOfIntegers(0, num, sum) << std::endl;
    }

    return 0;
}

int sumOfIntegers(int min, int num, int sum)
{
    if (min > sum || min > 9 || num == 0) {
        return 0;
    }

    if (min == sum && num == 1) {
        return 1;
    }

    return (sumOfIntegers(min + 1, num, sum) + sumOfIntegers(min + 1, num - 1, sum - min));
}
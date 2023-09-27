#include <iostream>
#include <stack>

int main()
{
    std::stack<int> cars;

    int in_car;
    while (std::cin >> in_car) {
        if (in_car == 0) {
            std::cout << cars.top() << std::endl;
            cars.pop();
        } else {
            cars.push(in_car);
        }
    }

    return 0;
}
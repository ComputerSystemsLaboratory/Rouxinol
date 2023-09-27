#include <iostream>
#include <array>

void swap(int &x, int &y);

int main()
{
    std::array<int, 2> input;
    std::cin >> input.at(0) >> input.at(1);

    while(input.at(0) != input.at(1)) {
        if (input.at(0) < input.at(1)) {//??§????????????????????????
            swap(input.at(0), input.at(1));
        }
        input.at(0) -=input.at(1);//?????????
    }

    std::cout << input.at(0) << std::endl;

    return 0;
}

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
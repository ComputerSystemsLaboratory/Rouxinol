#include <iostream>

int main()
{
    int highest = 0;//height_of_highest_mountain;
    int second = 0;//height_of_second_highest_mountain;
    int third = 0;//height_of_third_highest_mountain;
    int height;
    for (int i = 0;i < 10; i++) {
        std::cin >> height;

        if (height >= highest) {
            third = second;
            second = highest;
            highest = height;
            height = 0;
        } else if (height >= second) {
            third = second;
            second = height;
            height = 0;
        } else if (height >= third) {
            third = height;
            height = 0;
        }
    }

    std::cout << highest << std::endl;
    std::cout << second << std::endl;
    std::cout << third << std::endl;

    return 0;
}
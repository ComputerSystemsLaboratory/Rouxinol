#include <iostream>

int main()
{
    int in;
    std::cin >> in;

    int sec = in % 60;
    int min = ((in - sec) % 3600) / 60;
    int hour = (in - sec - min * 60) / 3600;
    std::cout << hour << ":" << min << ":" << sec << std::endl;

    return 0;
}
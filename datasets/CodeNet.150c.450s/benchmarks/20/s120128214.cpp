#include <iostream>

int main()
{
    int sec_in = 0;
    std::cin >> sec_in;
    int hour = (sec_in / (60*60)) % 60;
    int min = (sec_in / 60) % 60;
    int sec = sec_in % 60;
    std::cout << hour << ":" << min << ":" << sec << std::endl;
    return 0;
}
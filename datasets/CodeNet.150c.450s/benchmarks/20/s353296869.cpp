#include <iostream>

int main()
{
    int s;
    std::cin >> s;
    int hour = s / 3600;
    s -= hour * 3600;
    int min = s / 60;
    s -= min * 60;
    std::cout << hour << ":" << min << ":" << s << std::endl;
    return 0;
}
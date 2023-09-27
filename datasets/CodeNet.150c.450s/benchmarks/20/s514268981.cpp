#include <iostream>

int main(int argc, char const *argv[]) {
    int time_insec;
    std::cin >> time_insec;

    int hour;
    int min;
    int sec;
    
    hour = time_insec / 3600;
    min = (time_insec - hour * 3600) / 60;
    sec = time_insec % 60;

    std::cout << hour << ":" << min << ":" << sec << std::endl;

    return 0;
}
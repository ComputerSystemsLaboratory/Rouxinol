#include <iostream>

int main(){
    const int MINITES_MAX = 60;
    const int SECOND_MAX  = 60;

    int fullSecond = 0;
    std::cin >> fullSecond;

    int hour = fullSecond / ( MINITES_MAX * SECOND_MAX );
    int min  = ( fullSecond / SECOND_MAX ) % MINITES_MAX;
    int sec  = fullSecond % SECOND_MAX;

    std::cout << hour << ':' << min << ':' << sec << std::endl;
}
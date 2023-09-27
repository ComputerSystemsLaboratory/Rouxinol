#include <iostream>

int main(){
    int time;
    int h,m,s;
    std::cin >> time;
    h = time/3600;
    m = time % 3600 / 60;
    s = time % 60;
    std::cout << h << ":" << m << ":" << s << std::endl;
    return 0;
}

#include <iostream>

int s,m,h;
int second;
int t;

void watch(){
    std::cin >> second;
    h = static_cast<int>(second) / 3600;
    m = (static_cast<int>(second) % 3600) / 60;
    s = (static_cast<int>(second) % 3600) % 60;

    std::cout << h << ":" << m << ":" << s << '\n';
}

int main(){
    watch();
}
#include <iostream>

int main(){
    int d, s;
    while(std::cin >> d){
        s = 0;
        for(int i = 0; i < 600 / d; i++)
            s += i * d * i * d * d;
        std::cout << s << std::endl;
    }
    return 0;
}
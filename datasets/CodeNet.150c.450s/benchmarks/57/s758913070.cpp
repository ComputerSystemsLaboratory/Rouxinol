#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
#include <string>
#include <iomanip>

int main(int argc, char *argv[])
{
    int a,b;
    std::string op;

    while(1){
        std::cin >> a >> op >> b;
        if(op == "+"){
            std::cout << a+b << std::endl;
        }
        else if(op == "-"){
            std::cout << a-b << std::endl;
        }
        else if(op == "*"){
            std::cout << a*b << std::endl;
        }
        else if(op == "/"){
            std::cout << a/b << std::endl;
        }
        else break;
    }

    return 0;
}
#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
#include <string>
#include <iomanip>
#include <valarray>
#include <vector>
#include <sstream>

std::string call(int n){
    std::stringstream ss;
    int i = 0;
    while(++i <= n){
        int x = i;
        if(x  % 3 ==0){
            ss << " " << i;
            continue;
        }
        while(x){
            if(x%10 == 3){
                ss << " " << i;
                break;
            }
            x /= 10;
        }
    }
    return ss.str();
}


int main(int argc, char *argv[])
{
    int n;
    std::cin >> n;
    std::cout << call(n) << std::endl;
    return 0;
}
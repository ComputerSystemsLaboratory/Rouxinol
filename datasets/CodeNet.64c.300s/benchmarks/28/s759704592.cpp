#include <iostream>
using namespace std;

int main(void){

    unsigned int wide = 5;
    unsigned int height = 4;
    int pointX = 2;
    int pointY = 2;
    unsigned int radius = 1;
    int rightX;
    int leftX;
    int topY;
    int bottomY;

    std::cin >> wide >> height >> pointX >> pointY >> radius;

    rightX = pointX + radius;
    leftX = pointX - radius;
    topY = pointY + radius;
    bottomY = pointY - radius;

    if(rightX > wide || leftX < 0 || topY > height || bottomY < 0) {
        std::cout << "No" << std::endl;
    } else {
        std::cout << "Yes" << std::endl;
    }
    
    return 0;
}
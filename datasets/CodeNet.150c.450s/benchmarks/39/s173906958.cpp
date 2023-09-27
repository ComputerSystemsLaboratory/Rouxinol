#include <iostream>
using namespace std;
int main(void){
    int height;
    int width;
 std::cin >>height;cin >> width;
 
 int circumference; int acreage;
 circumference= height*2+width*2;
 acreage= height*width;
 std::cout <<  acreage << " " << circumference << std::endl;
}
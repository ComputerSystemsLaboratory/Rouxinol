#include <iostream>

int Length_Rest(int x, int y){
    return 2*x + 2*y;
}

int Area_Rect(int x, int y){
    return x*y;
}

int main(int argc, const char * argv[]) {
    int a;
    int b;
    std::cin >> a >> b;
    std::cout << Area_Rect(a,b)<< " " << Length_Rest(a,b) << std::endl;
    return 0;
}
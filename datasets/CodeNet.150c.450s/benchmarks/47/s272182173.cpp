#include <iostream>
          
bool is_correct_circle_center_point(int x, int y) {
    if(x > 0 && y > 0) return true;
          
    return false;
}         
          
bool is_axis_contains(int a, int b, int r) {
    if(a - r < 0) return false;
    if(a + r > b) return false;
          
    return true;
}         
          
bool is_contains(int x, int y, int w, int h, int r) {
    if(!is_correct_circle_center_point(x, y)) return false;
          
    if(!is_axis_contains(x, w, r)) return false;
    if(!is_axis_contains(y, h, r)) return false;
          
    return true;
}         
          
int main() {
    int x, y, w, h, r = 0;     
    std::cin >> w >> h >> x >> y >> r;
    if(is_contains(x, y, w, h, r)) {
        std::cout << "Yes" << std::endl;
    }     
    else {  
        std::cout << "No" << std::endl;
    }       
    return 0;
}
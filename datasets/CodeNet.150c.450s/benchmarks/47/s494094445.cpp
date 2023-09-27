#include <iostream>

using namespace std;

int main() {
    int width, height, x, y, radius;
    
    cin >> width >> height >> x >> y >> radius ;
    if(radius <= x && (width - radius) >= x && radius <= y && (height - radius) >= y) {
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
    
    return 0;
}
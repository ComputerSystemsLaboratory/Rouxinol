#include <iostream>

using namespace std;

int main(void){
    int width;
    int height;
    cin >> width >> height;
    
    int area = width * height;
    int perimeter = (width * 2) + (height * 2);
    
    cout << area << " " << perimeter << endl;

    return 0;
}
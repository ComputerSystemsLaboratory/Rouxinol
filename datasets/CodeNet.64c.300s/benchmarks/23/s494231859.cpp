#include <iostream>

using namespace std;

int Area(int a, int b);
int Perimeter(int a, int b);

int main() {
    int a, b;
    int area, perimeter;
    
    cin >> a >> b ;
    area = Area(a, b);
    perimeter = Perimeter(a, b);
    
    cout << area << ' ' << perimeter << endl;
    
    return 0;
}

int Area(int a, int b) {
    return a * b;
}

int Perimeter(int a, int b) {
    return 2 * (a + b);
}
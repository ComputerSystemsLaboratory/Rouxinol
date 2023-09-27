#include <iostream>
#include <vector>

using namespace std;

unsigned int gcd(unsigned int x, unsigned int y) {
    unsigned int temp =x%y;
    x = y;
    y = temp;
    
    if (y == 0) {
        return x;
    } else {
        return gcd(x, y);
    }
}

int main(int argc, char** argv) {
    unsigned int x, y = 0;
    
    cin >> x >> y;
    cout << gcd(x, y) << endl;
    
    return 0;
}
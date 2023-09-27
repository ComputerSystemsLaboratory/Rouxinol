#include <iostream>
using namespace std;
 
int gcd(int x, int y) {
    int amari;
    while(y != 0) {
        amari = x % y;
        x = y;
        y = amari;
    }
    return x;
}
 
int lcm(int x, int y) {
    int g = gcd(x, y);
    return x/g*y;
}

int main() {
    int a, b;
    while(true){
        cin >> a >> b;
        if (std::cin.eof()) {
            break;
        }
        cout << gcd(a, b) << ' ' << lcm(a, b) << endl;
    }
}
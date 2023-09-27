#include <iostream>
#include <cmath>
using namespace std;

int gcd(int a, int b) {
    int n = (a < b) ? a : b;
    
    if(a % n == 0 && b % n == 0) {
        return n;
    }
    for(int i = n / 2 ; i > 0; --i) {
        if(a % i == 0 && b % i == 0) {
            return i;
        }
    }
}
int main(void) {
    int a, b;
    
    cin >> a >> b;
    
    cout << gcd(a, b) << endl;
    
    return 0;
    
}

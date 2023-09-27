//Greatest Common Divisor
#include <iostream>
#include <cmath>

using namespace std;

int greatestCommonDivisor(int a, int b) {
    if(a > b) swap(a, b);
    while(b % a != 0) {
        int t = b % a;
        b = a;
        a = t;
    }
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << greatestCommonDivisor(a, b) << endl;
}

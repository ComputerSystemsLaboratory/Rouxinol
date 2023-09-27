#include <iostream>
#include <algorithm>
using namespace std;

//Greatest Common Divisor
int findGCD(int a, int b) {
    if (a > b) swap(a, b);
    if (b % a == 0) return a;
    return findGCD(a, b % a);
}

int main(void) {
    int a, b;
    cin >> a >> b;
    cout << findGCD(a, b) << endl;
    return 0;
}
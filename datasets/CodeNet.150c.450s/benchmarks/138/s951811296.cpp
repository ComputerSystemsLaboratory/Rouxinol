#include<iostream>
using namespace std;

int gcd(int a, int b) {
    return b? gcd(b, a % b) : a;
}

int main() {
    int a, b;
    
    cin >> a >> b;
    a = gcd(a, b);
    cout << a << endl;
    
    return 0;
}

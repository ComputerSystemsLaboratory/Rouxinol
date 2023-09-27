#include <iostream>
using namespace std;

long long int gcd(long long int a, long long int b) {
    if (a % b == 0) return b;
    return gcd(b, a % b);
}

int main() {
    long long int a, b;
    while(cin >> a) {
        cin >> b;
        cout << gcd(a, b) << " " << a / gcd(a, b) * b << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int gcd(int a, int b);
int main() {
    int a, b;
    cin >> a >> b;
    if (a < b) swap(a, b);
    cout << gcd(a, b) << endl;
}

int gcd(int a, int b) {
    int temp;
    while (b != 0) {
        temp = a;
        a = b;
        b = temp % b;
    }
    return a;
}
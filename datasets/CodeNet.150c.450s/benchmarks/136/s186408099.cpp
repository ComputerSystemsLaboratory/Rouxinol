#include <iostream>
#include <utility>
using namespace std;

int main() {
    int a, b;
    while (cin >> a >> b) {
        if (a > b) swap(a, b);
        int A = a, B = b;
        while ((a % A != 0) || (b % A != 0)) {
            --A;
        }
        while ((B % a != 0) || (B % b != 0)) {
            B += A;
        }
        cout << A << ' ' << B << endl;
    }
    
    return 0;
}

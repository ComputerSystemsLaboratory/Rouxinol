#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c;
    for (a; a < b + 1; a++) {
        if ( c % a == 0) {
            d++;
        }
    }
    cout << d << endl;
    return 0;
}
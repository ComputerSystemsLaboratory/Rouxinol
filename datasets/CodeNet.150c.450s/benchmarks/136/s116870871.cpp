#include <iostream>
#include <stdio.h>

using namespace std;

int gcd(int a, int b) {
    int r = a % b;
    if(r == 0) {
        return b;
    } else {
        return gcd(b, r);
    }
}

int main() {
    int a, b;
    int ma, mi;
    while(cin >> a >> b) {
        if(a < b) {
            swap(a, b);
        }
        ma = gcd(a,b);
        mi = ma * (a / ma) * (b / ma);
        cout << ma << ' ' << mi << endl;
    }

    return 0;
}
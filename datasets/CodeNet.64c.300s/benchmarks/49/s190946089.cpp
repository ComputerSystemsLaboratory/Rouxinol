#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int a, b;
    while (cin >> a >> b) {
        long long c = a + b;
        int d = 0;
        while (c) {
            c /= 10;
            d ++;
        }
        cout << d << endl;
    }
    return 0;
}
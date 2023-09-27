#include <iostream>
using namespace std;

int main(void) {
    int a = 0;
    int b = 0;
    int originalA;
    int originalB;

    int mod;

    while (cin >> a) {
        cin >> b;
        originalA = a;
        originalB = b;

        while (true) {
            mod = a % b;
            if (mod == 0) {
                break;
            }
            a = b;
            b = mod;
        }
        cout << b << " " << (originalA / b)  * originalB << endl;
    }
    return 0;
}
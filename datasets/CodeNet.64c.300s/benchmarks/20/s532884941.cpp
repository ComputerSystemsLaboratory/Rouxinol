#include <iostream>
using namespace std;

int main(void) {
    unsigned d, x, s;
    while(cin >> d) {
        x = 0; s = 0;
        while(x < 600) {
            s += x * x * d;
            x += d;
        }
        cout << s << endl;
    }
}
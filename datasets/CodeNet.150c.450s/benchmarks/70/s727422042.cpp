#include <iostream>

using namespace std;

const int mdays[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
const char* days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

int main(void) {
    int a, b, d;
    while (true) {
        cin >> a >> b;
        if (a == 0 && b == 0) break;
        d = 3;
        for (int m = 0; m < a - 1; m++) d += mdays[m];
        d += b - 1;
        cout << days[d % 7] << endl;
    }
    return 0;
}
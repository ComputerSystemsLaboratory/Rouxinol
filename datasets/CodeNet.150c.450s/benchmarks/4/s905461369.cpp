#include<iostream>

using std::cout;
using std::cin;
using std::endl;

void check(int m, int f, int r) {
    int sum = m + f;
    if (m == -1 || f == -1) {
        cout << 'F' << endl;
    } else if (sum >= 80) {
        cout << 'A' << endl;
    } else if (sum >= 65) {
        cout << 'B' << endl;
    } else if (sum >= 50) {
        cout << 'C' << endl;
    } else if (sum >= 30 && r >= 50) {
        cout << 'C' << endl;
    } else if (sum >= 30) { // ???????¨?50?????????
        cout << 'D' << endl;
    } else {
        cout << 'F' << endl;
    }
}

int main(void) {
    int m;
    int f;
    int r;
    cin >> m >> f >> r;
    while (m != -1 || f != -1 || r != -1) {
        check(m, f, r);
        cin >> m >> f >> r;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    while (1) {
        int i, j;
        char op;
        cin >> i >> op >> j;

        if (op == '+') {
            cout << i + j << endl;
        } else if (op == '-') {
            cout << i - j << endl;
        } else if (op == '*') {
            cout << i * j << endl;
        } else if (op == '/') {
            cout << i / j << endl;
        } else if (op == '?') {
            break;
        }
    }
    return 0;
}
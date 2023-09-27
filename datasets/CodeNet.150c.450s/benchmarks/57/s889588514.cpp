#include <iostream>

using namespace std;


int main() {
    int a, b;
    char op;

    while (1) {
        cin >> a >> op >> b;

        switch (op) {
            case '+':
                cout << a + b << endl;
                break;
            case '-':
                cout << a - b << endl;
                break;
            case '*':
                cout << a * b << endl;
                break;
            case '/':
                cout << a / b << endl;
                break;
            default:
                goto BREAK;
        }
    }
    BREAK:
    return 0;
}
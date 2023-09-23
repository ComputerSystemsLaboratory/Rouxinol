#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    while (true) {
        int a, b;
        char op;
        cin >> a >> op >> b;

        int ans = 0;
        switch (op) {
        case '+':
            ans = a + b;
            break;
        case '-':
            ans = a - b;
            break;
        case '*':
            ans = a * b;
            break;
        case '/':
            ans = a / b;
            break;
        default:
            return 0;
        }

        cout << ans << endl;
    }

    return 0;
}
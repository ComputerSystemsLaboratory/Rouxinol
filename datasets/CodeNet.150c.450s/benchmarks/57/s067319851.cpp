#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a, b;
    string op;
    while (cin >> a >> op >> b) {
        if (op == "?") break;
        if (op == "+") cout << a + b;
        else if (op == "-") cout << a - b;
        else if (op == "*") cout << a * b;
        else cout << a / b;
        cout << endl;
    }

    return 0;
}
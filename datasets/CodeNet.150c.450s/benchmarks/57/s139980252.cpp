#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    u_int a, b;
    char op;
    while (true) {
        int res;
        cin >> a >> op >> b;
        if (op == '+')
            res = a + b;
        else if (op == '-')
            res = a - b;
        else if (op == '*')
            res = a * b;
        else if (op == '/')
            res = a / b;
        else
            break;
        cout << res << endl;
    }

    return 0;
}
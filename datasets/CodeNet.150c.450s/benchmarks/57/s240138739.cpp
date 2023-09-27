#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
    while (true) {
        int a, b;
        char op;
        cin >> a >> op >> b;
        int ans;
        if (op == '?')return 0;
        else if (op == '+')ans = a + b;
        else if (op == '-')ans = a - b;
        else if (op == '*')ans = a * b;
        else if (op == '/')ans = a / b;

        cout << ans << endl;
    }
}

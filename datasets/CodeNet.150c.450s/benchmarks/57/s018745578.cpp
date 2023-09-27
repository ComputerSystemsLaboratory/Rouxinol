#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    string op;

    while ((cin >> a >> op >> b), op != "?") {
        cout << (op == "+" ? a + b :
                 op == "-" ? a - b :
                 op == "*" ? a * b :
                 a / b) << endl;
    }

    return 0;
}
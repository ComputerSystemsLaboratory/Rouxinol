#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str, op, p;
    int32_t q, a, b;

    cin >> str >> q;

    for (int32_t i = 0; i < q; i++) {
        cin >> op >> a >> b;

        if (op == "print") {
            cout << str.substr(a, b - a + 1) << endl;
        } else if (op == "reverse") {
            reverse(str.begin() + a, str.begin() + b + 1);
        } else if (op == "replace") {
            cin >> p;
            str.replace(str.begin() + a, str.begin() + b + 1, p);
        }
    }

    return 0;
}
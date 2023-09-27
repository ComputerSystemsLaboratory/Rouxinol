#include<iostream>
using namespace std;

int main() {
    int a, b;
    char oparator;
    while (true) {
        cin >> a >> oparator >> b;
        if (oparator == '?') break;
        if (oparator == '+') {
            cout << a + b << endl;
            continue;
        } else if (oparator == '-') {
            cout << a - b << endl;
            continue;
        } else if (oparator == '*') {
            cout << a * b << endl;
            continue;
        } else if (oparator == '/') {
            cout << a / b << endl;
            continue;
        }
    }
}
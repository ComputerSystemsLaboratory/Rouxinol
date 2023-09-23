#include<iostream>
#include<cstdio>
using namespace std;

int main() {
    int a, b;
    char op;
    while (true) {
        scanf("%d %c %d", &a, &op, &b);
        if (op == '+') {
            cout << a + b << endl;
        } else if (op == '-') {
            cout << a - b << endl;
        } else if (op == '*') {
            cout << a * b << endl;
        } else if (op == '/') {
            cout << a / b << endl;
        } else {
            break;
        }
    }
}
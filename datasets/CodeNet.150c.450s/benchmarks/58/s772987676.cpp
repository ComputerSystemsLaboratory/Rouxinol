#include <iostream>
#include <stdlib.h>
using namespace std;

int top;
int stack[256];

int pop() {
    --top;
    return stack[top + 1];
}

void push(int i) {
    ++top;
    stack[top] = i;
}

int main() {

    int a, b;
    a = 0;
    b = 0;
    top = 0;
    string str = "";

    while (cin >> str) {
        if (str == "+") {
            a = pop();
            b = pop();
            push(a + b);
        } else if (str == "-") {
            a = pop();
            b = pop();
            push(b - a);
        } else if (str == "*") {
            a = pop();
            b = pop();
            push(a * b);
        } else {
            push(atoi(str.c_str()));
        }
    }

    cout << pop() << endl;

    return 0;
}
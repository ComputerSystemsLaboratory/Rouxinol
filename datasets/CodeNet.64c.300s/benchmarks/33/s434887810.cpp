#include<iostream>
using std::cout;
using std::cin;
using std::endl;

void calc (int a, char op, int b); 

int main(void) {
    int a;
    int b;
    char op;
    while (op != '?') {
        cin >> a >> op >> b;
        calc(a, op, b);
    }

    return 0;
}

void calc (int a, char op, int b) {
    if (op == '+') {
       cout << a + b << endl; 
    } else if (op == '-') {
       cout << a - b << endl; 
    } else if (op == '*') {
       cout << a * b << endl; 
    } else if (op == '/') {
       cout << a / b << endl; 
    } else {
    }
    return;    
}
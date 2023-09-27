#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<vector>

using namespace std;

int top;
int S[1000];

void initialize() {
    top = 0;
}

int isEmpty() {
    return top == 0;
}

int isFull() {
    return top >= 1000 - 1;
}

void push(int x) {
    if (isFull()) {
        printf("Error");
    }
    S[++top] = x;
}

int pop() {
    if (isEmpty()) {
        printf("Error");
    }
    top--;
    return S[top + 1];
}

int main(void) {
    int a, b;
    char s[1000];
    initialize();

    while( cin >> s ) {
        if (s[0] == '+') {
            a = pop();
            b = pop();
            push(a + b);
        } else if (s[0] == '-') {
            a = pop();
            b = pop();
            push(b - a);
        } else if (s[0] == '*') {
            a = pop();
            b = pop();
            push(a * b);
        } else {
            push(atoi(s));
        }
    }

    cout << pop() << endl;

    return 0;
}

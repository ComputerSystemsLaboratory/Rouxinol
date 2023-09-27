#include <iostream>
#include <vector>
using namespace std;

#define N 101

class Stack {
public:
    void initialize();
    bool isEmpty();
    bool isFull();
    void push(const int);
    int pop();
    Stack(const int);
    ~Stack();
    
private:
    int top, STACKSIZE;
    vector<int> S;
};

void addition(Stack &s) {
    int a = s.pop(), b = s.pop();
    s.push(a+b);
}

void subtraction(Stack &s) {
    int a = s.pop(), b = s.pop();
    s.push(b - a);
}

void multiplication(Stack &s) {
    int a = s.pop(), b = s.pop();
    s.push(b * a);
}

int main() {
    Stack _s(N);
    char s[N];

    while(scanf("%s", s) != EOF) {
        if(s[0] == '+') {
            addition(_s);
        }

        else if(s[0] == '-') {
            subtraction(_s);
        }

        else if(s[0] == '*') {
            multiplication(_s);
        }

        else {
            _s.push(atoi(s));
        }
    }

    cout << _s.pop() << endl;

    return 0;
}

Stack::Stack(const int s) : top(0) {
    STACKSIZE = s;
    vector<int> tmp(STACKSIZE, 0);
    S = tmp;
}

Stack::~Stack() {
    //cout << "STACK DELETED" << endl;
}

void Stack::initialize() {
    top = 0;
}

bool Stack::isEmpty() {
    return (top == 0);
}

bool Stack::isFull() {
    return (top >= STACKSIZE-1);
}

void Stack::push(const int x) {
    if(isFull()) {
        cout << "Overflow!" << endl;
        exit(1);
    }

    top += 1;
    S[top] = x;
}

int Stack::pop() {
    if(isEmpty()) {
        cout << "Underflow" << endl;
        exit(2);
    }

    top -= 1;
    return (S[top+1]);
}

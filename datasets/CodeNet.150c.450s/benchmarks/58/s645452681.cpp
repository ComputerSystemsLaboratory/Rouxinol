#include <iostream>
#include <cstdlib>
using namespace std;

#define dStackSize 500

int stack[dStackSize];
int top;


void initialize();
bool isFull();
bool isEmpty();
void Dump();
void Push(int x);
int Pop();

int main() {
    initialize();
    string buf;
    int a, b;

    while( cin >> buf ) {
        if ( buf[0] == '+' ) {
            a = Pop();
            b = Pop();
            Push(b + a);
            // cout << b << "+" << a << "=" << b + a << endl;
        }
        else if( buf[0] == '-' ) {
            a = Pop();
            b = Pop();
            Push(b - a);
        }
        else if( buf[0] == '*' ) {
            a = Pop();
            b = Pop();
            Push(b * a);
        }
        else{
            Push(stoi(buf));
        }
        // Dump();
    }
    cout << Pop() << endl;

    return 0;
}

void initialize() {
    top = -1;
}
bool isFull() {
    if( top + 1 == dStackSize) {
        return true;
    }

    return false;
}

bool isEmpty() {
    if (top == -1 ) {
        return true;
    }

    return false;
}

void Dump() {
    for (int i = top; i >= 0; i--) {
        cout << i << ":" << stack[i] <<endl;
    }
}

void Push(int x) {
    if ( isFull() == true){
        cout << "stack is full" << endl;
        exit(1);
    }
    top++;
    stack[top] = x;

}

int Pop() {
    if ( isEmpty() == true ) {
        return -1;
    }
    int pop = stack[top];
    top--;

    return pop;
}
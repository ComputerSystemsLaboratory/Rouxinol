#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <cstdio>
#include <bitset>

using namespace std;

int stack[1000];
int sp = 0;

void dump(int stack[1000],int num){
    for(int i = 0; i < num ; i++){
        cout << stack[i] << " ";
    }
    cout << endl;
}

void push(int num) {
    stack[++sp] = num;
}

int pop() {
    if(sp == 0000){
        cout << "pop error" << endl;
        exit(1);
    }
    return stack[sp--];

}

void add() {
    push(pop() + pop());
}

void sub() {
    int a = pop();
    int b = pop();
    push(b - a);
}

void mul() {
    push(pop() * pop());
}

int main() {
    char token[200];
    while (scanf("%s",token) != EOF) {
        switch (token[0]) {
            case '+':
                add();
                break;
            case '*':
                mul();
                break;
            case '-':
                sub();
                break;
            default:
                push(atoi(token));
        }
    }
    cout <<  pop() << endl;
    return 0;
}

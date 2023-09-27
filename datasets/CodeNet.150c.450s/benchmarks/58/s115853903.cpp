
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stack>

int top, S[1000];

int pop () {
    if (top == 0) {
        throw "stack is empty.";
    }
    return S[--top];
}

void push (int x) {
    S[top++] = x;
}

int main(){
    int x;
    char s[100];

    top = 0;

    while( scanf("%s", s) != EOF ){
        if ( s[0] == '+' ){
            int a = pop();
            int b = pop();
            push(a+b);
        } else if ( s[0] == '-' ){
            int a = pop();
            int b = pop();
            push(b-a);
        } else if ( s[0] == '*' ){
            int a = pop();
            int b = pop();
            push(a*b);
        } else {
            x = atoi(s);
            push(x);
        }
    }

    printf("%d\n", pop());
    return 0;
}
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

const int MAX = 10000;
int stack[MAX];
int len = 0;

void init() {
    len = 0;
}

int top() {
    return stack[len-1];
}

bool isEmpty() {
    return len == 0;
}

int pop() {
    return stack[--len];
}

void push(int x) {
    stack[len++] = x;
}

const int MAXS = 100;
char s[MAXS];

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    init();
    while (~scanf("%s", s)) {
        if (s[0] == '+') {
            int a = pop();
            int b = pop();
            int c = b + a;
            push(c);
        } else if (s[0] == '-') {
            int a = pop();
            int b = pop();
            int c = b - a;
            push(c);
        } else if (s[0] == '*') {
            int a = pop();
            int b = pop();
            int c = b * a;
            push(c);
        } else if (s[0] == '/') {
            int a = pop();
            int b = pop();
            int c = b / a;
            push(c);
        } else {
            int num = atoi(s);
            push(num);
        }
    }

    printf("%d\n", pop());
    return 0;
}
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

typedef struct calc {
    int* top;
    int* data;
} calc_t;

calc_t* init(int size) {
    calc_t* calc = (calc_t*)malloc(sizeof(calc_t));
    calc->top = calc->data = (int*)malloc(sizeof(int) * size);
    return calc;
}

int pop(calc_t* stack) {
    if (stack->top == stack->data) {
        return -1;
    }
    int v = *(stack->data);
    stack->data--;
    return v;
}

int* push(calc_t* stack, int val) {
    int v = val;
    stack->data++;
    *(stack->data) = v;
    return stack->data;
}

int main() {
    calc_t* stack = init(200);
    string line;
    getline(cin, line);
    string buf;
    stringstream ss(line);
    while (ss >> buf) {
        if (buf == "+") {
            int v1 = pop(stack);
            int v2 = pop(stack);
            push(stack, v1 + v2);
        } else if (buf == "-") {
            int v1 = pop(stack);
            int v2 = pop(stack);
            push(stack, v2 - v1);
        } else if (buf == "*") {
            int v1 = pop(stack);
            int v2 = pop(stack);
            push(stack, v1 * v2);
        } else {
            push(stack, stoi(buf));
        }
    }

    printf("%d\n", pop(stack));
    return 0;
}
#include <iostream>
#include <string>

#include <stdlib.h>
#include <stdio.h>
//#include <algorithm>
using namespace std;

int S[1000], top = 0;

void push(int operand) {
	top++;
	S[top] = operand;
}

int pop(void) {
	top--;
	return S[top + 1];
}

int main(void) {
//	while(1) {
	char s[100];
	while(scanf("%s", s) != EOF) {
		int a, b;
		if (s[0] == '+') {
			a = pop();
			b = pop();
			push(a + b);
		} else if (s[0] == '-'){
			a = pop();
			b = pop();
			push(b - a);
		} else if (s[0] == '*'){
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


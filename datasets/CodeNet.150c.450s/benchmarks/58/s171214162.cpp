#include "bits/stdc++.h"
using namespace std;

void push(int A);
int pop(void);

int S[1000];
int Top = 0;

int main(void) {

	string str;
	int a, b;
	Top = 0;
	while (cin >> str) {

		if (str[0] == '+') {
			a = pop();
			b = pop();
			push(a + b);
		}
		else if (str[0] == '-') {
			b = pop();
			a = pop();
			push(a - b);
		}
		else if (str[0] == '*') {
			a = pop();
			b = pop();
			push(a * b);
		}
		else {
			push(atoi(str.c_str()));
		}
	}
	printf("%d\n", pop());

	return 0;
}

void push(int A) {
	S[++Top] = A;
}

int pop(void) {
	Top--;
	return S[Top + 1];
}

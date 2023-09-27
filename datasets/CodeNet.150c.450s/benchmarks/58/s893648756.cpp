#include <iostream>

using namespace std;

static const int MAX=100;

void push (int x);
int pop (void);

int stack[MAX] = {0};
int n = 0;

int main () {
	int v, op1, op2;
	string op;

        while (cin >> op) {
		switch ( *(op.c_str()) ) {
		case '+':
			op2 = pop();
			op1 = pop();
			push(op1 + op2);
			break;
		case '-':
			op2 = pop();
			op1 = pop();
			push(op1 - op2);
			break;
		case '*':
			op2 = pop();
			op1 = pop();
			push(op1 * op2);
			break;
		// case ' ':
		// 	break;
		default:
			push( stoi(op) );
			break;
		}
	}
	v = pop();

	cout << v << endl;

	return 0;
}

void push (int x) {
	int i;

	for (i = n - 1; i >= 0; i--)
		stack[i + 1] = stack[i];
	stack[0] = x;
	n++;
}

int pop (void) {
	int i, x;

	x = stack[0];
	for (i = 0; i < n; i++)
		stack[i] = stack[i + 1];
	n--;

	return x;
}
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

const int max_size = 101;
int que[max_size];
int top = 0;

bool isFull()
{
	return top == max_size;
}

bool isEmpty()
{
	return top == 0;
}

void push(int key)
{
	if (isFull())
		cout << "Stack is Full" << endl;
	que[top++] = key;
}

int pop()
{
	if (isEmpty())
		cout << "Stack is EMPTY" << endl;
	return (que[--top]);
}
int main(int argc, char** argv)
{
	string s;
	while (cin >> s) {
		if (s == "+") {
			int a, b;
			a = pop();
			b = pop();
			push(a + b);
		}
		else if (s == "-") {
			int a, b;
			a = pop();
			b = pop();
			push(b - a);
		}
		else if (s == "*") {
			int a, b;
			a = pop();
			b = pop();
			push(b * a);
		}
		else
			push(atoi(s.c_str()));
	}
        cout << pop() << endl;

	return 0;
}
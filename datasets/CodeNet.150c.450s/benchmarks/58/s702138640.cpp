#include <stdio.h>
#include <stdlib.h>

int stack[100];
int top = 0;

bool isFull()
{
	if (top == 199) {
		return true;
	}
	return false;
}

bool isEmpty()
{
	if (top == -1) {
		return true;
	}
	return false;
}

int pop()
{
	if (isEmpty()) {
		printf("Stack is empty.\n");
		exit(EXIT_FAILURE);
	}
	return stack[--top];
}

void push(int x)
{
	if (isFull()) {
		printf("Stack is full.\n");
		exit(EXIT_FAILURE);
	}
	else {
		stack[top] = x;
		top++;
	}
}

int main(int argc, char** argv)
{
	char s[200];

	while (scanf("%s",s) != EOF)
	{
		if (s[0] == '+') {
			int x = pop();
			int y = pop();
			push(y + x);
		}
		else if (s[0] == '-') {
			int x = pop();
			int y = pop();
			push(y - x);
		}
		else if (s[0] == '*') {
			int x = pop();
			int y = pop();
			push(y * x);
		}
		else {
			int x = atoi(s);
			push(x);
		}
	}
	printf("%d\n", pop());

	return 0;
}
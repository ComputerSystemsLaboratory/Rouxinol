#include <iostream>
#include <cstdlib>
using namespace std;
int S[1000], top;
void push(int i){
	S[top] = i;
	top++;
}
int pop() {
	int i = S[top-1];
	top--;
	return i;
}
int main() {
	int i, j;
	char c[100];
	while (cin >> c) {
		if (c[0] == '+') {
			i = pop();
			j = pop();
			push(i + j);
		}
		else if (c[0] == '-') {
			i = pop();
			j = pop();
			push(j - i);
		}
		else if (c[0] == '*') {
			i = pop();
			j = pop();
			push(i*j);
		}
		else push(atoi(c));
	}
	cout << pop() << endl;
	return 0;
}
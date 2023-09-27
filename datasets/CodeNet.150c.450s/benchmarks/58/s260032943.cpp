#include "bits/stdc++.h"
using namespace std;

void push(int A);
int pop(void);

vector<int> S(1000);
int Top = 0;

int main(void) {

	string str;
	int a, b;
	Top = 0;
	while (cin >> str) {

		if (str == "+") {
			a = pop();
			b = pop();
			push(a + b);
		}
		else if (str == "-") {
			b = pop();
			a = pop();
			push(a - b);
		}
		else if (str == "*") {
			a = pop();
			b = pop();
			push(a * b);
		}
		else {
			push(atoi(str.c_str()));
		}
	}
	cout << pop() << endl;

	return 0;
}

void push(int A) {
	S.at(++Top) = A;
}

int pop(void) {
	Top--;
	return S.at(Top + 1);
}

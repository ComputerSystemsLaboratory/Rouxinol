#include<iostream>
#include<cstdlib>
#include<stack>

using namespace std;


/*
int top, S[1000];
void push(int x);
int pop();


int main() {
	int a, b;
	top = 0;
	char s[100];

	int t = 0;

	while (cin >> s) {
		if (s[0] == '+') {
			a = pop();
			b = pop();
			push(a + b);
		}
		else if (s[0] == '-') {
			a = pop();
			b = pop();
			push(a - b);
		}
		else if (s[0] == '*') {
			a = pop();
			b = pop();
			push(a * b);
		}
		else {
			push(atoi(s));
		}
	}

	cout << pop() << endl;

	return 0;
}

void push(int x) {
	S[++top] = x;
}

int pop() {
	top--;
	return S[top + 1];
}


*/

int main() {
	stack<int> st;
	char s[10];
	int a = 0, b = 0;
	while (cin >> s) {
		if (s[0] == '+') {
			a = st.top(); st.pop();
			b = st.top(); st.pop();
			st.push(a + b);
		}
		else if (s[0] == '-') {
			a = st.top(); st.pop();
			b = st.top(); st.pop();
			st.push(b - a);
		}
		else if (s[0] == '*') {
			a = st.top(); st.pop();
			b = st.top(); st.pop();
			st.push(a * b);
		}
		else {
			st.push(atoi(s));
		}
	}
	cout << st.top() << endl;
	return 0;
}

#include <iostream>
#include <stack>
#include <string>
using namespace std;

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_3_A

int main() {
	stack<int> stack;
	char str[100];
	while (cin >> str) {
		char c = str[0];
		switch (c) {
			case '+':
			{
				int a = stack.top();
				stack.pop();
				int b = stack.top();
				stack.pop();
				stack.push(b + a);
				break;
			}
			case '-':
			{
				int a = stack.top();
				stack.pop();
				int b = stack.top();
				stack.pop();
				stack.push(b - a);
				break;
			}
			case '*':
			{
				int a = stack.top();
				stack.pop();
				int b = stack.top();
				stack.pop();
				stack.push(b * a);
				break;
			}
			default:
				stack.push(stoi(str));
		}
	}
	cout << stack.top() << endl;
	return 0;
}
#include<iostream>
#include<string>
using namespace std;
class stack {
public:
	int a[100], top;
	stack() {
		top = 0;
	}
	void push(int x) {
		a[++top] = x;
		return;
	}
	int pop() {
		return a[top--];
	}
};
int main() {
	stack Z;
	string s;
	int a, b;
	while (cin >> s) {
		if (s == "+") {
			a = Z.pop();
			b = Z.pop();
			Z.push(a + b);
		}
		else if (s == "-") {
			a = Z.pop();
			b = Z.pop();
			Z.push(b - a);
		}
		else if (s == "*") {
			a = Z.pop();
			b = Z.pop();
			Z.push(a*b);
		}
		else if (s == "/") {
			a = Z.pop();
			b = Z.pop();
			Z.push(b / a);
		}
		else {
			Z.push(stoi(s));
		}
	}
	cout << Z.pop() << endl;
	return 0;
}
#include <iostream>
#include <stack>
#include <cstdlib>
using namespace std;
int main() {
	const int  n =100;
	stack<int> i;
	char s[n];
	int a, b;
	while (cin >> s) {
		if (s[0] == '+') {
			a = i.top(); i.pop();
			b = i.top(); i.pop();
			i.push(a + b);
		}
		else if (s[0] == '-') {
			a = i.top(); i.pop();
			b = i.top(); i.pop();
			i.push(b - a);
		}
		else if (s[0] == '*') {
			a = i.top(); i.pop();
			b = i.top(); i.pop();
			i.push(a*b);
		}
		else i.push(atoi(s));

	}
	cout << i.top() << endl;
	return 0;
}
#include<iostream>
#include<string>
#include <vector>
#include <stack>
#include <algorithm>
#include <cstdlib>
using namespace std;
int main() {
	stack<int> S;
	int a, b, x;
	string s;
	while (cin >> s) {
		if (s.at(0) == '+') {
			a = S.top(); S.pop();
			b = S.top(); S.pop();
			S.push(a + b);
		}
		else if (s.at(0) == '-') {
			b = S.top(); S.pop();
			a = S.top(); S.pop();
			S.push(a - b);
		}
		else if (s.at(0) == '*') {
			a = S.top(); S.pop();
			b = S.top(); S.pop();
			S.push(a*b);
		}
		else {
			S.push(atoi(s.c_str()));
		}
	}
	cout << S.top() << endl;
}

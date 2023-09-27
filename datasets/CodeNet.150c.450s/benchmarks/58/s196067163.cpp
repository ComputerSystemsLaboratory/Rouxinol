#include <iostream>
#include <stack>
#include <string>
#include <sstream>
using namespace std;

int main () {
	stack<int> a;
	string data;
	int ans, b, c;
	stringstream ss;
	while(cin >> data) {
		if (data == "*") {
			b = a.top();
			a.pop();
			c = a.top();
			a.pop();
			ans = c * b;
		}
		else if (data == "+") {
			b = a.top();
			a.pop();
			c = a.top();
			a.pop();
			ans = c + b;
		}
		else if (data == "-") {
			b = a.top();
			a.pop();
			c = a.top();
			a.pop();
			ans = c - b;
		}
		else {
			ss << data;
			ss >> ans;
			ss.str("");
			ss.clear(stringstream::goodbit);
		}
		a.push(ans);		
	}
	cout << a.top() << endl;
	return 0;
}
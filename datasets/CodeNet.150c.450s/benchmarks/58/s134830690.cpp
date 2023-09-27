#include <iostream>
#include <stack>
#include <cstring>
#include <cstdio>
using namespace std;

int main(){
	stack<string> stk;
	char s[10];
	string token;
	while (scanf("%s", s) != EOF) {
		token = s;
		if (token == "+") {
			long b = atoi(stk.top().c_str());
			stk.pop();
			long a = atoi(stk.top().c_str());
			stk.pop();
			stk.push(to_string(a + b));
		} else if (token == "-") {
			long b = atoi(stk.top().c_str());
			stk.pop();
			long a = atoi(stk.top().c_str());
			stk.pop();
			stk.push(to_string(a - b));
		} else if (token == "*") {
			long b = atoi(stk.top().c_str());
			stk.pop();
			long a = atoi(stk.top().c_str());
			stk.pop();
			stk.push(to_string(a * b));
		} else {
			stk.push(token);
		}
	}

	while (!stk.empty()) {
		cout << stk.top() << endl;
		stk.pop();
	}
	return 0;
}
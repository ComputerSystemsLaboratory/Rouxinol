#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<iostream>
#include<sstream>
#include<utility>
#include<map>
#include<vector>
#include<queue>
#include<algorithm>
#include<stack>
#include<set>

using namespace std;

int main() {
	stack<int> stack;
	string input;
	while (cin >> input) {
		if (input == "+") {
			int post = stack.top(); stack.pop();
			int pre = stack.top(); stack.pop();

			stack.push(pre + post);
		}
		else if (input == "-") {
			int post = stack.top(); stack.pop();
			int pre = stack.top(); stack.pop();

			stack.push(pre - post);
		}
		else if (input == "*") {
			int post = stack.top(); stack.pop();
			int pre = stack.top(); stack.pop();

			stack.push(pre * post);
		}
		else {
			stack.push(atoi(input.c_str()));
		}
	}
	cout << stack.top() << endl;

	}
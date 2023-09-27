#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <cstdio>

using namespace std;

int main() {
	char tmp[100];
	stack<int> st;
	while (cin >> tmp) {
		if (tmp[0] == '+') {
			int b = st.top();
			st.pop();
			int a = st.top();
			st.pop();
			st.push(a + b);
		}else if (tmp[0] == '-') {
			int b = st.top();
			st.pop();
			int a = st.top();
			st.pop();
			st.push(a - b);
		} else if (tmp[0] == '*') {
			int b = st.top();
			st.pop();
			int a = st.top();
			st.pop();
			st.push(a * b);
		} else st.push(atoi(tmp));
	}

	cout << st.top() << endl;

	return 0;
}

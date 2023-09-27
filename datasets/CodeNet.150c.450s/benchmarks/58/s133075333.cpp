#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <vector>
#include <cstdlib>

using namespace std;

int main(void) {

	stack<int> st;
	int a, b;
	string s;

	while (cin >> s) {
		if (s[0] == '+') {
			a = st.top(); st.pop();
			b = st.top(); st.pop();
			st.push(a + b);
		}
		else if (s[0] == '-') {
			b = st.top(); st.pop();
			a = st.top(); st.pop();
			st.push(a - b);
		}
		else if (s[0] == '*') {
			a = st.top(); st.pop();
			b = st.top(); st.pop();
			st.push(a * b);
		}
		else if (s[0] == '\n')
			break;
		else
			st.push(atoi(s.c_str()));
	}

	cout << st.top() << endl;

	return 0;
}
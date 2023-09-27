#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
	string s;
	stack<int> st;

	while (cin >> s) {
		if (s == "+" || s == "-" || s == "*") {
			int n1, n2;
			n1 = st.top();
			st.pop();
			n2 = st.top();
			st.pop();
			if (s == "+") {
				st.push(n1 + n2);
			}
			else if (s == "-") {
				st.push(n2 - n1);
			}
			else if (s == "*") {
				st.push(n1 * n2);
			}
		}
		else {
			st.push(stoi(s));
		}
	}
	cout << st.top() << endl;

	return 0;
}
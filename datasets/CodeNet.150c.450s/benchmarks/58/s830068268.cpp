# include <iostream>
# include <cstdlib>
# include <stack>

using namespace std;

int main() {
	string t;
	stack<int> s;
	while (cin >> t) {
		if (t == "+") {
			int op1 = s.top(); s.pop();
			int op2 = s.top(); s.pop();
			int ans = op2 + op1;
			s.push(ans);
		}
		else if (t == "-") {
			int op1 = s.top(); s.pop();
			int op2 = s.top(); s.pop();
			int ans = op2 - op1;
			s.push(ans);
		}
		else if (t == "*") {
			int op1 = s.top(); s.pop();
			int op2 = s.top(); s.pop();
			int ans = op2 * op1;
			s.push(ans);
		}
		else {
			s.push(atoi(t.c_str()));
		}
	}
	cout << s.top() << endl;
	return 0;
}
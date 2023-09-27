#include<iostream>
#include<stack>
#include<cstdlib>
using namespace std;

int main() {
	stack<int> s;
	string x;
	while (cin >> x) {
		if (x == "+") {
			int t1 = s.top();
			s.pop();
			int t2 = s.top();
			s.pop();
			s.push(t1 + t2);

			//cout << s.top() << "+ was processed" << endl;
		}
		else if (x == "-") {
			int t1 = s.top();
			s.pop();
			int t2 = s.top();
			s.pop();
			s.push(t2 - t1);

			//cout << s.top() << "- was processed" << endl;

		}
		else if (x == "*") {
			int t1 = s.top();
			s.pop();
			int t2 = s.top();
			s.pop();
			s.push(t1 * t2);

			//cout << s.top() << "* was processed" << endl;

		}
		else {
			s.push(atoi(x.c_str()));

		}

	}


	cout << s.top() << endl;

	return 0;
}
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>

using namespace std;


int main() {

	vector<string> ary;
	string v;
	while (cin >> v)
	{
		ary.push_back(v);
	}
	stack<int>  stk;

	int sum = 0; int v1 = 0; int v2 = 0;
	for (int i = 0;i < ary.size();i++) {
		string val = ary[i];
		if (val == "+") {

			int v1 = stk.top();
			stk.pop();
			int v2 = stk.top();
			stk.pop();
			stk.push(v1 + v2);
		}
		else if (val == "-") {

			int v1 = stk.top();
			stk.pop();
			int v2 = stk.top();
			stk.pop();
			stk.push(v2 - v1);

		}
		else if (val == "*") {

			int v1 = stk.top();
			stk.pop();
			int v2 = stk.top();
			stk.pop();
			stk.push(v1 * v2);
		}
		else
		{
			stk.push(stoi(val));
		}
	}

	cout << stk.top() << endl;
	return 0;
}


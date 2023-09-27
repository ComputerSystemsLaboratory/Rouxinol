#include <vector>
#include <stack>
#include <iostream>

using namespace std;

int sumup(stack<int> &stk) {
	int sum = 0;
	while (stk.size()) {
		sum += stk.top();
		stk.pop();
	}
	return sum / 2;
}

int main() {
	vector<char> vec;
	stack<int> stk;
	vector<int> result;

	int count = 0;	
	int depth = 0;
	char s;
	while (cin >> s) {
		vec.push_back(s);
	}

	int i = 0;
	while (i < vec.size()) {
		if (vec[i] != '\\') {
			++i;
			continue;
		}
		depth = 0;
		for (int j = i; j < vec.size(); ++j) {
			s = vec[j];
			if (s == '\\') {
				stk.push(2 * depth + 1);
				++depth;
			} else if (s == '/') {
				stk.push(2 * depth - 1);
				--depth;
			} else if (s == '_') {
				stk.push(2 * depth);
			}
			if (depth == 0) {
				result.push_back(sumup(stk));
				i = j + 1;
				break;
			}
		}
		if (depth) {
			while(stk.size()) stk.pop();
			++i;
		}
	}

	int sum = 0;
	for (int i = 0; i < result.size(); ++i) {
		sum += result[i];
	}
	cout << sum << endl;
	cout << result.size();
	for (int i = 0; i < result.size(); ++i) {
		cout << " " << result[i];
	}
	cout << endl;

	return 0;
}
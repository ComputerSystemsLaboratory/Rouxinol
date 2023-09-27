#include <bits/stdc++.h>
using namespace std;

int main() {
	string str;
	cin >> str;

	stack<int> s;
	stack<pair<int, int> > l;

	for (int i = 0; i < (int)str.size(); ++i) {
		if (str[i] == '\\') {
			s.push(i);
		} else if (str[i] == '/' && !s.empty()) {
			int a = i - s.top();
			while (!l.empty() && l.top().first > s.top()) {
				a += l.top().second;
				l.pop();
			}
			l.emplace(s.top(), a);
			s.pop();
		}
	}

	int sum = 0;
	stack<int> ans;
	while (!l.empty()) {
		ans.push(l.top().second);
		sum += l.top().second;
		l.pop();
	}

	cout << sum << endl;
	cout << ans.size();
	while (!ans.empty()) {
		cout << " " << ans.top();
		ans.pop();
	}
	cout << endl;
}


#include <algorithm>
#include <iostream>
#include <list>
#include <math.h>
#include <stack>
#include <stdio.h>
#include <string>
#include <queue>
#include <vector>
using namespace std;

int main()
{
	string s;
	stack<int> S;
	stack<pair<int, int> > W;
	char ch;
	int sum = 0;
	for (int i = 0; cin >> ch; i++) {
		if (ch == '\\') {
			S.push(i);
		}
		else if (ch == '/' && S.size() > 0) {
			int j = S.top(); S.pop();
			sum += i - j;
			int a = i - j;
			while (W.size() > 0 && W.top().first > j) {
				a += W.top().second; W.pop();
			}

			W.push(make_pair(j, a));
		}
	}

	vector<int> ans;
	while (W.size() != 0) { ans.push_back(W.top().second); W.pop(); }

	cout << sum << endl;
	cout << ans.size();
	for (int i = ans.size() - 1; i >= 0; i--) {
		cout << " " << ans[i];
	}
	cout << endl;
}


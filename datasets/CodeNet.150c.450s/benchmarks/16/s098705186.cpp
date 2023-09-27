#include <bits/stdc++.h>

using namespace std;

#define AC return 0

typedef long long ll;

stack<int> st1;
stack<pair<int, int> > st2;

int main() {
	char ch;
	int ans = 0;
	for (int i = 0; cin >> ch; ++i) {
		if (ch == '\\') st1.push(i);
		else if (ch == '/' && st1.size()){
			int j = st1.top();
			st1.pop();
			int num = i - j;
			ans += num;
			while (st2.size() && st2.top().first > j) {
				num += st2.top().second;
				st2.pop();
			}
			st2.push(make_pair(j, num));
		}
	}
	vector<int> outt;
	while (st2.size()) {
		outt.push_back(st2.top().second);
		st2.pop();
	}
	printf("%d\n%d", ans, outt.size());
	for (int i = outt.size() - 1; ~i; --i) {
		printf(" %d", outt[i]);
	}
	printf("\n");
	AC;
}

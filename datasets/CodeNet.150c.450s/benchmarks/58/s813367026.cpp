#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cctype>
#include<climits>
#include<cmath>
#include<cstdio>
#include<deque>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;

int main() {
	stack<int> S;
	for (string s; cin >> s&&s != "$";) {
		int a, b;
		switch (s[0]) {
		case '+':
			b = S.top(); S.pop();
			a = S.top(); S.pop();
			S.push(a + b);
			break;
		case '-':
			b = S.top(); S.pop();
			a = S.top(); S.pop();
			S.push(a - b);
			break;
		case '*':
			b = S.top(); S.pop();
			a = S.top(); S.pop();
			S.push(a * b);
			break;
		default:
			S.push(atoi(s.c_str()));
			break;
		}
	}

	cout << S.top() << endl;

	return 0;
}
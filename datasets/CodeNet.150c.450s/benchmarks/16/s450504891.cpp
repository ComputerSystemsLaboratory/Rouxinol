#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	stack<int> S1;
	stack<pair<int, int> > S2;
	int i;
	char ch;
	for (i = 0; cin >> ch; i++) {
		if (ch == '\\') {
			S1.push(i);
			S2.push(make_pair(i, 0));
		}else if (ch == '/') {
			if (S1.size() == 0) {
				continue;
			}

			int last = S1.top(); S1.pop();
			int sum = i-last;
			while (S2.top().first != last) {
				sum += S2.top().second;
				S2.pop();
			}
			S2.top().second += sum;
		}
	}

	int areaSum = 0;
	stack<int> reverse;
	while (S2.size() > 0) {
		int s = S2.top().second;
		if (s > 0) {
			reverse.push(s);
			areaSum += s;
		}
		S2.pop();
	}
	cout << areaSum << endl;

	cout << reverse.size();

	while (reverse.size() > 0) {
		cout << " ";
		cout << reverse.top();
		reverse.pop();
	}

	cout << endl;

	return 0;
}

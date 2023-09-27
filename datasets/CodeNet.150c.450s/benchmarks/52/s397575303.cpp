#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	stack<int> train;
	while (cin >> n) {
		if (n) {
			train.push(n);
		} else {
			cout << train.top() << endl;
			train.pop();
		}
	}
}
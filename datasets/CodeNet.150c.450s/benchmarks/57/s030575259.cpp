#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	int a, b;
	char c;

	vector<int> v;
	while (cin >> a >> c >> b) {
		if (c == '?') {
			break;
		}

		int ans;
		switch (c) {
			case '+':
				ans = a + b;
				break;
			case '-':
				ans = a - b;
				break;
			case '*':
				ans = a * b;
				break;
			case '/':
				ans = a / b;
				break;
			default:
				break;
		}
		v.push_back(ans);
	}

	vector<int>::iterator i;

	for (i = v.begin(); i != v.end(); i++) {
		cout << *i << endl;
	}

	return 0;
}
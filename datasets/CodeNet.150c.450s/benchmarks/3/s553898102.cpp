#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	string str;
	int n;

	cin >> str;
	for (cin >> n; n > 0; n--) {
		string op;
		cin >> op;

		if (op == "print") {
			int a, b;

			cin >> a >> b;
			cout << str.substr(a, b - a + 1) << endl;
		} else if (op == "reverse") {
			int a, b;

			cin >> a >> b;
			reverse(str.begin() + a, str.begin() + b + 1);
		} else if (op == "replace") {
			int a, b;
			string p;

			cin >> a >> b >> p;
			str.replace(a, b - a + 1, p);
		}
	}
}
#include<iostream>
#include<string>
using namespace std;

int main() {
	int q, a, b;
	string str, operation, p;
	cin >> str;
	cin >> q;

	for (int i = 0; i < q; i++) {
		cin >> operation;
		if (operation == "print") {
			cin >> a >> b;
			cout << str.substr(a, b - a + 1) << endl;
		}
		else if (operation == "replace") {
			cin >> a >> b >> p;
			str.replace(a, b - a + 1, p);
		}
		else if (operation == "reverse") {
			cin >> a >> b;

			string tmp = str.substr(a, b - a + 1);
			int n = tmp.size();

				for (int i = 0; i < n; i++) {
					str[a + i] = tmp[n - 1 - i];
			}
		}
	}

	return 0;
}
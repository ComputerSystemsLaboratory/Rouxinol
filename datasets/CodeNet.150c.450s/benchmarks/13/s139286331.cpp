#include <iostream>
#include <string>
using namespace std;

int main() {
	int x;
	string s, p;
	cin >> s ;
	cin >> p;

	s += s;

	for (int i = 0;i < s.length() / 2;i++) {
		if (s[i] == p[0]) {
			x = 0;
			for (int j = 0;j < p.length();j++) {
				if (s[i + j] != p[j]) { break; }
				x++;
			}

			if (x == p.length()) {
				cout << "Yes" << endl;
				return 0;
			}
		}
	}

	cout << "No" << endl;
	return 0;
}
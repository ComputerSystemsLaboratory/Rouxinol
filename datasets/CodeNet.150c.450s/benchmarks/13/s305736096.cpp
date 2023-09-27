#include <iostream>
#include <string>

using namespace std;

int main() {
	string s, p;

	cin >> s >> p;

	s += s;
	for (int i = 0; i < s.length() - p.length(); i++) {
		for (int j = 0; j < p.length(); j++) {
			if (s[i + j] != p[j]) break;
			if (j == p.length() - 1) {
				cout << "Yes" << endl;
				return 0;
			}
		}
	}

	cout << "No" << endl;

	return 0;
}
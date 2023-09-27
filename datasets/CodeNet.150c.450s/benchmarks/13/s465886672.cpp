#include <iostream>
#include <string>

using namespace std;

int counter[26];

int main() {
	string s, p;
	getline(cin, s);
	getline(cin, p);
	for (int i = 0; i < s.size(); i++) {
		int j = 0;
		for (; j < p.size() && s.at((i + j) % s.size()) == p.at(j); j++);
		if (j == p.size()) {
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
	return 0;
}
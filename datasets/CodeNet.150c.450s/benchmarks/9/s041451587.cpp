#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	int m, h;
	while (1) {
		cin >> s;
		if (s == "-") break;
		cin >> m;
		for (int i = 0; i < m; i++) {
			cin >> h;
			string copy;
			copy = s.substr(0, h);
			s.erase(s.begin(), s.begin() + h);
			s = s + copy;
		}
		cout << s << endl;
	}
	return 0;
}
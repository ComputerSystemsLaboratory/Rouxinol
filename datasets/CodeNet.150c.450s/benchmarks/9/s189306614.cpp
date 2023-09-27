#include <iostream>
#include <string>
using namespace std;

void out(string s, int h);

int main() {
	string str;
	int m, h;
	int h_total = 0;
	while (cin >> str) {
		if (str == "-") break;
		cin >> m;
		for (int i = 0; i < m; i++) {
			cin >> h;
			h_total += h;
		}
		out(str, h_total);
		h_total = 0;
	}
	return 0;
}

void out(string s, int h) {
	int num = h % s.length();
	string t = s.substr(num);
	for (int i = 0; i < num; i++) {
		t += s[i];
	}
	cout << t << endl;
}
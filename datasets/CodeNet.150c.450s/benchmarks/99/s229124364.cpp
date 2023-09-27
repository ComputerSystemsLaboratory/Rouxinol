#include <iostream>
#include <string>

using namespace std;

int mcxitoi(string s) {
	int res = 0;
	int t = 1;
	for (char c : s) {
		if (isdigit(c)) {
			t = c - '0';
		} else {
			if (c == 'm') t *= 1000;
			else if (c == 'c') t *= 100;
			else if (c == 'x') t *= 10;
			res += t;
			t = 1;
		}
	}
	return res;
}

string sign(int x) {
	string res;
	if (x == 1) return res;
	res += '0' + x;
	return res;
}

string itomcxi(int x) {
	string res;
	if (x / 1000) res += sign(x / 1000) + "m";
	x %= 1000;
	if (x / 100) res += sign(x / 100) + "c";
	x %= 100;
	if (x / 10) res += sign(x / 10) + "x";
	x %= 10;
	if (x) res += sign(x) + "i";
	return res;
}

int main() {
	int n; cin >> n;
	while (n--) {
		string s1, s2; cin >> s1 >> s2;
		cout << itomcxi(mcxitoi(s1) + mcxitoi(s2)) << endl;
	}
	return 0;
}

#include <iostream>
#include <map>
using namespace std;

map<char, int> m;

int dec (string str) {
	int sum = 0;
	int coef = 1;
	for (char c : str) {
		if (c >= '2' && c <= '9') coef = c - '0';
		else {
			sum += m[c] * coef;
			coef = 1;
		}
	}
	return sum;
}

string enc (int x) {
	string s[] = {"i", "x", "c", "m"};
	string ret = "";
	for (int i = 0; i < 4; i++) {
		int coef = x % 10;
		x /= 10;
		string tmp = "";
		if (coef >= 2) tmp += coef + '0';
		if (coef) tmp += s[i];
		ret = tmp + ret;
	}
	return ret;
}

int main()
{
	int n;
	string a, b;

	m['m'] = 1000;
	m['c'] = 100;
	m['x'] = 10;
	m['i'] = 1;

	cin >> n;
	while (n--) {
		cin >> a >> b;
		cout << enc(dec(a) + dec(b)) << endl;
	}
	return 0;
}
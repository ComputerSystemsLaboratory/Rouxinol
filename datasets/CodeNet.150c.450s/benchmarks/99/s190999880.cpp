//mcxi???1111???mcxi (????????????????¨?????????¨????????????, ??¨????????¨?\????
#include <iostream>
#include <string>
using namespace std;

int pow10[4];

void init() {
	pow10[0] = 1;
	for (int i = 1; i <= 3; i++) pow10[i] = pow10[i - 1] * 10;
}

int Value(char c) {
	if (c == 'm') return 1000;
	if (c == 'c') return 100;
	if (c == 'x') return 10;
	if (c == 'i') return 1;
	return 0;
}

int decode(string s) {
	int ret = 0;
	for (int i = 0; i < s.length(); i++) {
		if (!Value(s[i])) continue;
		
		int val;
		if (i == 0 || Value(s[i - 1]) > 0) val = 1;
		else val = s[i - 1] - '0';
		ret += val * Value(s[i]);
	}
	return ret;
}

string encode(int x) {
	int val[4];
	int i;
	string ret;
	
	for (i = 0; i < 4; i++) val[i] = (x / pow10[i]) % 10;
	for (i = 3; i >= 0; i--) {
		if (val[i] == 0) continue;
		if (val[i] > 1) ret += val[i] + '0';
		ret += "ixcm"[i];
	}
	return ret;
}

int main() {
	int n;
	cin >> n;
	init();
	for (int i = 0; i < n; i++) {
		string s, t;
		cin >> s >> t;
		int a = decode(s);
		int b = decode(t);
		cout << encode(a + b) << endl;
	}
	return 0;
}
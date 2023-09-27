#include <bits/stdc++.h>

//#define var auto
#define ll long long

using namespace std;

int parse(string s)  {
	int res = 0;
	int dig = 0;
	//5m2c3x4i
	for (auto&& c : s) {
		if ('0' <= c && c <= '9') {
			dig = c - '0';
			continue;
		}
		int mul;
		switch (c)
		{
		case 'm':
			mul = 1000;
			break;
		case 'c':
			mul = 100;
			break;
		case 'x':
			mul = 10;
			break;
		case 'i':
			mul = 1;
			break;
		}
		//i
		if (dig == 0) dig = 1;
		res += dig * mul;
		dig = 0;
	}
	return res;
}

string encode(int n) {
	string res = "";
	for (int mul = 1000; mul != 0; mul /= 10) {
		int dig = n / mul;
		if (dig == 0) continue;
		if (dig != 1) {
			res += (char)('0' + dig);
		}
		char c;
		switch (mul)
		{
		case 1000:
			c = 'm';
			break;
		case 100:
			c = 'c';
			break;
		case 10:
			c = 'x';
			break;
		case 1:
			c = 'i';
			break;
		}
		res += c;
		n = n % mul;
	}
	return res;
}

void solve() {
	string s, t;
	cin >> s >> t;
	int a, b;
	a = parse(s);
	b = parse(t);
	int res = a + b;
	cout << encode(res) << endl;
}

int main() {
	int n;
	cin >> n;
	for (size_t i = 0; i < n; i++)
	{
		solve();
	}
}


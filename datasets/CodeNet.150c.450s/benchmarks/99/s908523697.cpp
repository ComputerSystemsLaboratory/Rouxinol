#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {

	int n;
	vector<string>s(10000);
	vector<string>t(10000);
	int dp[10000] = {};
	
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> s[i] >> t[i];
	}
	for (int i = 1; i <= n; i++) {
		int a, b, c, d;

		for (int p = 0; p <= s[i].size() - 1; p++) {
			if (p == 0) {
				switch (s[i][p]) {
					case 'm':
						dp[i] += 1000;
						break;
					case 'c':
						dp[i] += 100;
						break;
					case 'x':
						dp[i] += 10;
						break;
					case 'i':
						dp[i] += 1;
						break;
				}
			}
			else {
				switch (s[i][p]) {
				case 'm':
					if ('2' <= s[i][p - 1] && s[i][p - 1] <= '9') {
						dp[i] += 1000 * (s[i][p - 1] - '0');
					}
					else {
						dp[i] += 1000;
					}
					
					break;
				case 'c':
					if ('2' <= s[i][p - 1] && s[i][p - 1] <= '9') {
						dp[i] += 100 * (s[i][p - 1] - '0');
					}
					else {
						dp[i] += 100;
					}
					break;
				case 'x':
					if ('2' <= s[i][p - 1] && s[i][p - 1] <= '9') {
						dp[i] += 10 * (s[i][p - 1] - '0');
					}
					else {
						dp[i] += 10;
					}
					break;
				case 'i':
					if ('2' <= s[i][p - 1] && s[i][p - 1] <= '9') {
						dp[i] +=(s[i][p - 1] - '0');
					}
					else {
						dp[i] += 1;
					}
					break;
				}
			}
			
		}
		for (int p = 0; p <= t[i].size() - 1; p++) {
			if (p == 0) {
				switch (t[i][p]) {
				case 'm':
					dp[i] += 1000;
					break;
				case 'c':
					dp[i] += 100;
					break;
				case 'x':
					dp[i] += 10;
					break;
				case 'i':
					dp[i] += 1;
					break;
				}
			}
			else {
				switch (t[i][p]) {
				case 'm':
					if ('2' <= t[i][p - 1] && t[i][p - 1] <= '9') {
						dp[i] += 1000 * (t[i][p - 1] - '0');
					}
					else {
						dp[i] += 1000;
					}

					break;
				case 'c':
					if ('2' <= t[i][p - 1] && t[i][p - 1] <= '9') {
						dp[i] += 100 * (t[i][p - 1] - '0');
					}
					else {
						dp[i] += 100;
					}
					break;
				case 'x':
					if ('2' <= t[i][p - 1] && t[i][p - 1] <= '9') {
						dp[i] += 10 * (t[i][p - 1] - '0');
					}
					else {
						dp[i] += 10;
					}
					break;
				case 'i':
					if ('2' <= t[i][p - 1] && t[i][p - 1] <= '9') {
						dp[i] += (t[i][p - 1] - '0');
					}
					else {
						dp[i] += 1;
					}
					break;
				}
			}

		}

		a = dp[i] / 1000;
		b = (dp[i] - 1000 * a) / 100;
		c = (dp[i] - 1000 * a - 100 * b) / 10;
		d = (dp[i] - 1000 * a - 100 * b - 10 * c);

		if (a != 0) {
			if (a == 1) {
				cout << 'm';
			}
			else {
				cout << a << 'm';
			}
		}
		if (b != 0) {
			if (b == 1) {
				cout << 'c';
			}
			else {
				cout << b << 'c';
			}
		}
		if (c != 0) {
			if (c == 1) {
				cout << 'x';
			}
			else {
				cout << c << 'x';
			}
		}
		if (d != 0) {
			if (d == 1) {
				cout << 'i';
			}
			else {
				cout << d << 'i';
			}
		}
		cout << endl;
	}
	
	return 0;
}

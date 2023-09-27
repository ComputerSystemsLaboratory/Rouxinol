#include <iostream>
#include <cctype>
#include <cstdlib>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int j = 0; j < n; j++) {
		char num1[10], num2[10];
		cin >> num1 >> num2;

		int m = 0, x = 0, c = 0, i = 0;
		int pos = 0;
		while (num1[pos]) {
			bool flag = false;
			int tmpi;
			if (isdigit(num1[pos])) {
				char tmpc[2] = { num1[pos], '\0' };
				tmpi = atoi(tmpc);
				pos++;
				flag = !flag;
			}
			switch (num1[pos]) {
			case 'm':
				m += flag ? tmpi : 1;
				break;
			case 'x':
				x += flag ? tmpi : 1;
				break;
			case 'c':
				c += flag ? tmpi : 1;
				break;
			case 'i':
				i += flag ? tmpi : 1;
				break;
			default:
				break;
			}
			pos++;
		}

		pos = 0;
		while (num2[pos]) {
			bool flag = false;
			int tmpi;
			if (isdigit(num2[pos])) {
				char tmpc[2] = { num2[pos], '\0' };
				tmpi = atoi(tmpc);
				pos++;
				flag = !flag;
			}

			switch (num2[pos]) {
			case 'm':
				m += flag ? tmpi : 1;
				break;
			case 'x':
				x += flag ? tmpi : 1;
				break;
			case 'c':
				c += flag ? tmpi : 1;
				break;
			case 'i':
				i += flag ? tmpi : 1;
				break;
			default:
				break;
			}
			pos++;
		}

		if (i > 9) {
			x += i / 10;
			i %= 10;
		}
		if (x > 9) {
			c += x / 10;
			x %= 10;
		}
		if (c > 9) {
			m += c / 10;
			c %= 10;
		}

		if (m > 1) {
			cout << m;
		}
		if (m > 0) {
			cout << 'm';
		}
		if (c > 1) {
			cout << c;
		}
		if (c > 0) {
			cout << 'c';
		}
		if (x > 1) {
			cout << x;
		}
		if (x > 0) {
			cout << 'x';
		}
		if (i > 1) {
			cout << i;
		}
		if (i > 0) {
			cout << 'i';
		}
		cout << endl;
	}

	return 0;
}
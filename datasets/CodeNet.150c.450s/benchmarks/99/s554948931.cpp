#include <iostream>
#include <cstdio>

using namespace std;

int str2num(char *str) {
	int sum = 0;
	int tmp = 1;
	for (int i = 0; str[i] != '\0'; i++) {
		switch (str[i]) {
			case 'm':
				sum += tmp * 1000;
				tmp = 1;
				break;
			case 'c':
				sum += tmp * 100;
				tmp = 1;
				break;
			case 'x':
				sum += tmp * 10;
				tmp = 1;
				break;
			case 'i':
				sum += tmp * 1;
				tmp = 1;
				break;
			default:
				tmp = str[i] - '0';
				break;
		}
	}
	//cout << sum << endl;
	return sum;
}

void num2str(char *dst, int num) {
	//cout << "num2str::" << num << endl;
	int i = 0;
	if (num >= 2000) {
		//cout << "num2str::debug::2000" << endl;
		dst[i++] = (num / 1000) + '0';
		num %= 1000;
		dst[i++] = 'm';
	} else if (num >= 1000) {
		//cout << "num2str::debug::1000" << endl;
		num %= 1000;
		dst[i++] = 'm';
	}
	if (num >= 200) {
		//cout << "num2str::debug::200" << endl;
		dst[i++] = (num / 100) + '0';
		num %= 100;
		dst[i++] = 'c';
	} else if (num >= 100) {
		//cout << "num2str::debug::100" << endl;
		num %= 100;
		dst[i++] = 'c';
	}
	if (num >= 20) {
		//cout << "num2str::debug::20" << endl;
		dst[i++] = (num / 10) + '0';
		num %= 10;
		dst[i++] = 'x';
	} else if (num >= 10) {
		//cout << "num2str::debug::10" << endl;
		num %= 10;
		dst[i++] = 'x';
	}
	if (num >= 2) {
		//cout << "num2str::debug::2" << endl;
		dst[i++] = (num / 1) + '0';
		num %= 1;
		dst[i++] = 'i';
	} else if (num >= 1) {
		//cout << "num2str::debug::1" << endl;
		num %= 1;
		dst[i++] = 'i';
	}
	dst[i] = '\0';
}

void solve(char *str1, char *str2) {
	//cout << str1 << ':' << str2 << endl;
	int
		i1 = str2num(str1),
		i2 = str2num(str2);
	int sum = i1 + i2;
	char sout[15];
	num2str(sout, sum);
	cout << sout << endl;
}

int main(void) {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		char s1[15], s2[15];
		scanf("%s %s", s1, s2);
		solve(s1, s2);
	}
}
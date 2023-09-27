#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;

string split(string str, char c) {
	string res;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == c) {
			break;
		}
		else {
			res += str[i];
		}
	}
	return res;
}

string readed(string str, int n) {
	int r = 0;
	if (n > 0) {
		if (n > 1) {
			r = 2;
		}
		else {
			r = 1;
		}
	}
	return str.substr(r, str.length());
}

int check_num(string str, char c) {
	if (str == split(str, c)) {
		return 0;
	}
	else {
		if (split(str, c) == "") {
			return 1;
		}
		else {
			return std::atoi(split(str, c).c_str());
		}
	}
}

int main(void) {
	char mcxi[4] = { 'm', 'c', 'x', 'i' };
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		std::string m1,m2;
		std::vector<int> c(4);
		cin >> m1;
		cin >> m2;
		for (int j = 0; j < 4; j++) {
			int c1,c2;
			c1 = check_num(m1, mcxi[j]);
			c2 = check_num(m2, mcxi[j]);
			c[j] = c1 + c2;
			m1 = readed(m1, c1);
			m2 = readed(m2, c2);
		}
		for (int j = 3; j > 0; j--) {
			if (c[j] > 9) {
				c[j-1] += 1;
				c[j] -= 10;
			}
		}
		for (int j = 0; j < 4; j++) {
			if (c[j] > 0) {
				if (c[j] > 1) {
					cout << c[j];
				}
				cout << mcxi[j];
			}
		}
		cout << endl;
	}
	return 0;
}
#include <iostream>
#include <string>
using namespace std;

int parse(string str) {
	int rtn = 0;
	int tmp = 1;
	for (int i=0; i<str.size(); i++) {
		if (str[i] >= '2' && str[i] <= '9') {
			tmp = (int) str[i] - (int) '0';
		} else {
			switch (str[i]) {
				case 'm':
					rtn += tmp * 1000;
					break;
				case 'c':
					rtn += tmp * 100;
					break;
				case 'x':
					rtn += tmp * 10;
					break;
				default:
					rtn += tmp;
			}
			tmp = 1;
		}
	}
	return rtn;
}

string conv(int num) {
	const char c[4] = { 'm', 'c', 'x', 'i' };
	string res = "";
	int div = 1000;
	for (int i=0; i<4; i++) {
		if (num / div) {
			if (num/div != 1)
				res += (char) (num/div + (int) '0');;
			res += c[i];
			num -= (num/div*div);
		}
		div /= 10;
	}
	return res;
}

int main() {
	int N;
	cin >> N;
	while (N--) {
		string d1, d2;
		cin >> d1 >> d2;
		cout << conv(parse(d1)+parse(d2)) << endl;
	}
	return 0;
}
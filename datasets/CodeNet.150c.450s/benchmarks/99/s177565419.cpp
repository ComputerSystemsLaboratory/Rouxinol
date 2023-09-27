#include <cctype>
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int convert[255];
const string str = "ixcm";

int next() {
	string s;
	cin >> s;

	int res = 0, coefficient = 1;
	for(int i = 0; i < (int)s.size(); ++i) {
		if(isdigit(s[i])) {
			coefficient = s[i] - '0';
		}
		else {
			res += convert[s[i]] * coefficient;
			coefficient = 1;
		}
	}

	return res;
}

string to_mcxi(int n) {
	string res;
	for(int i = 0; i < 4; ++i) {
		int tmp = n % 10;
		if(tmp) {
			res = str[i] + res;
			if(tmp > 1)
				res = string(1, tmp + '0') + res;
				
		}

		n /= 10;
	}

	return res;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	int num = 1;
	for(int i = 0; i < (int)str.size(); ++i) {
		convert[str[i]] = num;
		num *= 10;
	}

	int n;
	cin >> n;

	for(int i = 0; i < n; ++i) {
		int a = next(), b = next();
		cout << to_mcxi(a + b) << endl;
	}

	return EXIT_SUCCESS;
}
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

int parse(string s) {
	int ret = 0;
	int multiplier = 1;

	for (int i = 0; i < (int)s.size(); i++) {
		if('2' <= s[i] && s[i] <= '9') {
			multiplier = s[i] - '0';
		}
		else {
			ret += multiplier
					* (s[i] == 'm' ? 1000
					: s[i] == 'c' ? 100
					: s[i] == 'x' ? 10
					: s[i] == 'i' ? 1
					: 0);
			multiplier = 1;
		}
	}
	return ret;
}

void print_mcxi_string(int i) {
	int multiplier = 0;
	char bases[] = {'m', 'c', 'x', 'i'};
	for (int j = 3; j >= 0; j--) {
		int pos = (int)pow(10.0, (double)j);
		if(i >= pos) {
			multiplier = i / pos;
			if(multiplier > 1) {
				cout << multiplier;
			}
			cout << bases[3-j];
			i %= pos;
		}
	}
	cout << endl;
}

int main() {
	int n;
	cin >> n;
	while(n--) {
		string s1, s2;
		cin >> s1 >> s2;
		print_mcxi_string(parse(s1) + parse(s2));
	}
	return 0;
}
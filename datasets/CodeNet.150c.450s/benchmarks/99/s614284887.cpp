#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <tuple>
#include <queue>
#include <stack>
#include <set>

using namespace std;

class Solver {
	
};

int get_value(string s) {
	int val = 0;
	int tmp = 1;
	for (int i = 0; i < s.size(); i++) {
		if ('2' <= s[i] && s[i] <= '9') {
			tmp = s[i] - '0';
			continue;
		}

		if (s[i] == 'm')val += tmp * 1000;
		if (s[i] == 'c')val += tmp * 100;
		if (s[i] == 'x')val += tmp * 10;
		if (s[i] == 'i')val += tmp * 1;
		tmp = 1;
	}
	return val;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s1, s2;
		cin >> s1 >> s2;
		int val = get_value(s1) + get_value(s2);
		vector<char> chars{ 'm','c','x','i' };
		for (int i = 0; i < 4; i++) {
			int digit = (val / 1000) % 10;
			if (digit == 1)cout << chars[i];
			if (digit > 1)cout << digit << chars[i];
			val *= 10;
		}
		cout << endl;
	}
}

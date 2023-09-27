#define _USE_MATH_DEFINES
#include "bits/stdc++.h"
#define EPS 1e-10
using namespace std;
typedef long long llong;
int mcxitoi(string s) {
	int sum = 0;
	int st = 1;
	for (int i = 0; i < s.size(); i++) {
		if (isdigit(s[i])) {
			st = s[i] - '0';
		}
		else if (isalpha(s[i])) {
			switch (s[i]) {
			case 'm':sum += 1000 * st; break;
			case 'c':sum += 100 * st; break;
			case 'x':sum += 10 * st; break;
			case 'i':sum += 1 * st; break;
			}
			st = 1;
		}
	}
	return sum;
}

string itomcxi(int z) {
	string res;
	for (int i = 3; i >= 0; i--) {
		if (z / (int)pow(10, i)) {
			if (z / (int)pow(10, i) != 1)res += to_string(z / (int)pow(10, i));
			switch (i) {
			case 3:res += 'm'; break;
			case 2:res += 'c'; break;
			case 1:res += 'x'; break;
			case 0:res += 'i'; break;
			}
		}
		z %= (int)pow(10, i);
	}
	return res;
}
int main() {
	int n;
	cin >> n;
	while (n--) {
		string s1, s2;
		cin >> s1 >> s2;
		cout << itomcxi(mcxitoi(s1) + mcxitoi(s2)) << endl;
	}
	return 0;
}
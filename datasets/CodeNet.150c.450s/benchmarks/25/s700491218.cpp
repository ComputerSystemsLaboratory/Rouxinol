#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(void) {
	int a[30], l;
	char c[30];
	string s;
	for (int i = 0; i < 26; i++) {
		c[i] = 'a' + i;
		a[i] = 0;
	}
	while (cin >> s) {
		l = s.size();
		for (int i = 0; i < l; i++) {
			if ('A' <= s[i] && s[i] <= 'Z') {
				s[i] = s[i] - 'A' + 'a';
			}
			for (int j = 0; j < 26; j++) {
				if (s[i] == c[j]) {
					a[j]++;
				}
			}
		}
	}
	for (int i = 0; i < 26; i++) {
		cout << c[i] << " : " << a[i] << endl;
	}
	return 0;
}
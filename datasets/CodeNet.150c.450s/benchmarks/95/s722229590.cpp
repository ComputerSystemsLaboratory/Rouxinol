// 2016-12-02
#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, c;
	bool l, r;
	string s;
	while (cin >> n, n) {
		c = 0;
		l = r = false;
		for (int i = 0; i < n; i++) {
			cin >> s;
			if (s[0] == 'l') {
				l ^= true;
			} else {
				r ^= true;
			}
			if (l && r) {
				c++;
				l = r = false;
			}
		}
		cout << c << endl;
	}
	return 0;
}
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int shuffle(string &s, int h) {
	string t = s.substr(0, h),
		u = s.substr(h);
	s = u + t;
	return 0;
}

int main() {
	string a;
	int m, h;
	while (1) {
		cin >> a >> m;
		if (a == "-") break;
		for (int i = 0;i < m;++i) {
			cin >> h;
			shuffle(a, h);
		}
		cout << a << endl;
	}
	
	return 0;
}
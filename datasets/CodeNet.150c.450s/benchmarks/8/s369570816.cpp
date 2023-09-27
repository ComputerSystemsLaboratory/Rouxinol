#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int strcmp(string s, string t) {
	if (s[0] < t[0]) {
		return 1;
	}
	else if (s[0] == t[0]) {
		if (s.length() == 1 && t.length() == 1) {
			return 0;
		}
		else if (s.length() == 1) {
			return 1;
		}
		else if (t.length() == 1) {
			return -1;
		}
		else {
			return strcmp(s.substr(1), t.substr(1));
		}
	}
	else {
		return -1;
	}
}
int main() {
	int n, e = 0, f = 0;
	cin >> n;
	vector<string> a, b;

	for (int i = 0;i < n;i++) {
		string t, h;
		cin >> t >> h;
		a.push_back(t);
		b.push_back(h);
	}
	for (int i = 0;i < n;i++) {
		int c = strcmp(a[i], b[i]);
		switch (c) {
		case 1:
			f += 3;
			break;
		case 0:
			f++;
			e++;
			break;
		case -1:
			e += 3;
			break;
		default:
			cout << "hoge" << endl;
		}
	}
	cout << e << " " << f << endl;
	return 0;
}
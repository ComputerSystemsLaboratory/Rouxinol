#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	string s, t, r;
	int n, a, b;
	cin >> s >> n;
	for (int i = 0; i < n; i++) {
		cin >> t >> a >> b;
		if (t == "print")
			cout << s.substr(a, b - a + 1) << endl;
		else if (t == "reverse")
			for (int j = 0; j < (b - a + 1) / 2; j++)
				swap(s[a + j], s[b - j]);
		else {
			cin >> r;
			s.replace(a, b - a + 1, r);
		}
	}
}
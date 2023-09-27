#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	string s, t, r;
	int n, a, b;
	cin >> s >> n;
	while (n--) {
		cin >> t >> a >> b;
		if (t == "print")
			cout << s.substr(a, b - a + 1) << endl;
		else if (t == "reverse")
			reverse(s.begin() + a, s.begin() + b + 1);
		else {
			cin >> r;
			s.replace(a, b - a + 1, r);
		}
	}
}
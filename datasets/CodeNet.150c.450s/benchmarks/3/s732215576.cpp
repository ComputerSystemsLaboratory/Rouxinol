#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string s, c, p;
	int q, a, b;

	cin >> s >> q;
	while (q--) {
		cin >> c >> a >> b;
		int l = b - a + 1;
		if (c == "print")
			cout << s.substr(a, l) << endl;
		else if (c == "reverse")
			reverse(s.begin() + a, s.begin() + b + 1);
		else {
			cin >> p;
			s = s.replace(a, l, p);
		}
	}

	return 0;
}

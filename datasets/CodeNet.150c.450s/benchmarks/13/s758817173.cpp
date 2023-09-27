#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s, p;
	cin >> s;
	cin >> p;

	bool flag = false;
	for (int i = 0; i < s.length(); i++) {
		int match = 0;
		while (p[match] == s[(i + match) % s.length()]) match++;
		if (match == p.length()) flag = true;
	}
	cout << (flag ? "Yes" : "No") << endl;

	return 0;
}
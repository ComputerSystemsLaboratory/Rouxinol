#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	while (getline(cin, s), s != "0") {
		int res = 0;
		for (char c : s) {
			res += c - '0';
		}
		cout << res << endl;
	}
	return 0;
}
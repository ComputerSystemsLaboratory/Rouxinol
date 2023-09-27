#include <bits/stdc++.h>
using namespace std;

int main()
{
	bool ff = true;
	string s, p;
	cin >> s >> p;
	int ls = s.size(), lp = p.size();
	for (int i = 0; i < ls; i++) {
		bool flag = true;
		for (int j = 0; j < lp; j++) {
			if (s[(i + j) % ls] != p[j]) {
				flag = false;
				break;
			}
		}
		if (flag) {
			ff = false;
			cout << "Yes" << endl;
			break;
		}
	}
	if (ff) {
		cout << "No" << endl;
	}
	return 0;
}
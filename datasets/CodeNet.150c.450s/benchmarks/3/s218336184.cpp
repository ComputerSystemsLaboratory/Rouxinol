#include <bits/stdc++.h>
using namespace std;

int main()
{
	int q, a, b;
	string str, com;
	cin >> str >> q;
	while (q--) {
		cin >> com;
		if (com == "print") {
			cin >> a >> b;
			cout << str.substr(a, b - a + 1) << endl;
		}
		else if (com == "reverse") {
			string tmp = str;
			cin >> a >> b;
			for (int i = 0; i + a <= b; i++) {
				str[a + i] = tmp[b - i];
			}
		}
		else {
			string tmp;
			cin >> a >> b >> tmp;
			for (int i = 0; i + a <= b; i++) {
				str[a + i] = tmp[i];
			}
		}
	}
	return 0;
}
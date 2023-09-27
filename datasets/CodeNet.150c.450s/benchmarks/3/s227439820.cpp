#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
int main(void)
{
	string str, ans[100], p, ex;
	int a, b, q, cou = 0;
	char c;
	cin >> str;
	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> ex;
		cin >> a >> b;
		if (ex == "print") {
			ans[cou] = str.substr(a, (b - a) + 1);
			cou++;
		}
		if (ex == "reverse") {
			for (int j = 0; j < (b - a + 1) / 2; j++) {
				c = str[a + j]; str[a + j] = str[b - j]; str[b - j] = c;
			}
		}
		if (ex == "replace") {
			cin >> p;
			str = str.replace(a, (b - a) + 1, p);
		}
	}
	for (int i = 0; i < cou; i++) {
		cout << ans[i] << endl;
	}
}
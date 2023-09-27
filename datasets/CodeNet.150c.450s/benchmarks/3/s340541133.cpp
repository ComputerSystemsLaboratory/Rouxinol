
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <climits>
#include <list>

using namespace std;

int main()
{
	string str, order, p;
	int q, a, b;
	cin >> str >> q;
	for (int i = 0; i < q; i++) {
		cin >> order;
		if (order == "print") {
			cin >> a >> b;
			cout << str.substr(a, b - a + 1) << endl;
		}
		else if (order == "reverse") {
			cin >> a >> b;
			string oldstr = str.substr(a, b - a + 1);
			string newstr;
			for (int i = 0; i < b - a + 1; i++) {
				newstr += oldstr[b - a - i];
			}
			str.replace(a, b - a + 1, newstr);
		}
		else if (order == "replace") {
			cin >> a >> b >> p;
			str.replace(a, b - a + 1, p);
		}
	}
	return 0;
}
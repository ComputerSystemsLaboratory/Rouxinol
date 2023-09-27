#include <iostream>
#include <stack>
using namespace std;

int main () {
	stack<char> sc;
	int lim, m = 0, ds = 0, i = 0, k = 0, SS = 0;
	int s[10000];
	int rs[10000];
	char c;
	while(cin >> c) {
		sc.push(c);
		if (m == 0) {
			if (c == '\\')
				m++;
		}
		else {
			if (c == '/')
				m--;
			else if (c == '\\')
				m++;
		}
		ds = ds + m;
		if ((ds != 0) && (m == 0)) {
			s[i++] = ds;
			ds = 0;
			lim = sc.size();
			for(int j = 0; j < lim; j++)
				sc.pop();
		}
	}
	m = 0;
	ds = 0;
	lim = sc.size();
	for (int j = 0; j < lim; j++) {
		c = sc.top();
		sc.pop();
		if (m == 0) {
			if (c == '/')
				m++;
		}
		else {
			if (c == '\\')
				m--;
			else if (c == '/')
				m++;
		}
		ds = ds + m;
		if ((ds != 0) && (m == 0)) {
			rs[k++] = ds;
			ds = 0;
		}
	}
	for (int j = 0; j < i; j++)
		SS = SS + s[j];
	for (int j = 0; j < k; j++)
		SS = SS + rs[j];
	cout << SS << endl;
	cout << i + k;
	for (int j = 0; j < i; j++)
		cout << ' ' << s[j];
	for (int j = k - 1; j >= 0; j--)
		cout << ' ' << rs[j];
	cout << endl;
	return 0;
}
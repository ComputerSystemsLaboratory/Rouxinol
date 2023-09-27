#include<iostream>
#include<stdio.h>
#include <string>
using namespace std;
/*int main() {
	int n, i, j, k,c,d,e,f;
	c = 0;
	d = 0;
	char a[1000], b[1000];
	cin >> n;
	for (i = 0; i < n; i++) {
		k = 0;
		e = 0;
		f = 0;
		for (j = 0; j < 1000; j++) {
			scanf_s("%c", &a[j]);
			if (a[j] == ' ')break;
			e++;
		}
		for (j = 0; j < 1000; j++) {
			scanf_s("%c", &b[j]);
			if (b[j] == '\n')break;
			f++;
		}
		if (e < f) {
			for (j = 0; j < e; j++) {
				if (a[j] < b[j]) {
					c += 3;
					k = 1;
					break;
				}
				if (a[j] > b[j]) {
					d += 3;
					k = 1;
					break;
				}
			}
			if (k == 0) {
				c += 3;
			}
		}
		if (e >= f) {
			for (j = 0; j < f; j++) {
				if (a[j] < b[j]) {
					c += 3;
					k = 1;
					break;
				}
				if (a[j] > b[j]) {
					d += 3;
					k = 1;
					break;
				}
			}
			if (k == 0) {
				if (e > f) {
					d += 3;
				}
				else {
					c++; 
					d++;
				}
			}
		}
		
	}
	cout << d << " " << c << endl;
	return 0;
}
*/
/*int main() {
	string a, b, c;
	int n, i, j,s,t,p,q;
	p = 0; q = 0;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> c;
		s = c.find(" ");
		a = c.substr(0, s);
		b = c.substr(s + 1);
		if (a > b) {
			p += 3;
		}
		if (a < b) {
			q += 3;
		}
		if (a == b) {
			p += 1;
			q += 1;
		}
	}
	cout << p << ' '<< q << endl;
	return 0;
}
*/
int main() {
	string a, b, c;
	int n, i, j, s, t, p, q;
	p = 0; q = 0;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> a>>b;
		if (a > b) {
			p += 3;
		}
		if (a < b) {
			q += 3;
		}
		if (a == b) {
			p += 1;
			q += 1;
		}
	}
	cout << p << ' ' << q << endl;
	return 0;
}
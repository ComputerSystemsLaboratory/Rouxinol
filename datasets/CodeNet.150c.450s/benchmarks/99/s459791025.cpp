#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<algorithm>
#include<map>
#include<cmath>
using namespace std;
int main() {
	map<char, int>u;
	u.insert(map<char, int>::value_type('m', 1000));
	u.insert(map<char, int>::value_type('c', 100));
	u.insert(map<char, int>::value_type('x', 10));
	u.insert(map<char, int>::value_type('i', 1));
	int v;
	cin >> v;
	for (int z = 0; z < v; z++) {
		string a, b;
		cin >> a >> b;
		int a2=0, b2=0;
		for (int i = 0; i < a.length(); i++) {
			if (a[i] >= '0'&&a[i] <= '9') {
				a2 += (u[a[i + 1]] * ((int)a[i] - '0'));
				i++;
			}
			else {
				a2 += u[a[i]];
			}
		}
		for (int i = 0; i < b.length(); i++) {
			if (b[i] >= '0'&&b[i] <= '9') {
				b2 += (u[b[i + 1]] * ((int)b[i] - '0'));
				i++;
			}
			else {
				b2 += u[b[i]];
			}
		}
		int c = a2 + b2;
		string d = "";
		int e = -1;
		char r[4] = { 'm','c','x','i' };
		int r2[4] = { 1000,100,10,1 };
		for (int i = 0; i < 4; i++) {
			e = 0;
			while (c >= r2[i]) {
				e++;
				c -= r2[i];
			}
			if (e != 0) {
				if (e >= 2) {
					d += to_string(e);
				}
				d += r[i];
			}
		}
		cout << d << endl;
	}
} 
#include <iostream>
#include <string>
#include <stddef.h>
#include <stack>
#include <queue>
#include <cctype>
#include <stdio.h>
#include <cstdlib>
#include <algorithm>

using namespace std;


int main() {
	string s;
	string p, q;
	int m;
	int h[100];
	while (1) {
		cin >> s >> m;
		for (int i = 0; i < m; i++) {
			cin >> h[i];
		}
		if (s == "-") break;
		for (int i = 0; i < m; i++) {
			p = s.substr(0, h[i]);
			q = s.substr(h[i], s.size()-h[i]);
			s = q + p;
		}
		cout << s << endl;
	}
}
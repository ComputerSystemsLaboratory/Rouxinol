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

void print(string s, int a, int b) {
	cout << s.substr(a, b - a + 1) << endl;
}

string reverse(string s, int a, int b) {
	string t;
	t += s.substr(0, a);
	for (int i = 0; i < b - a + 1; i++) {
		t += s[b - i];
	}
	t = t + s.substr(b + 1, s.size() - b-1);
	return t;
}

string replace(string s,string p, int a, int b) {
	string t;
	t += s.substr(0, a);
	t = t + p;
	t = t + s.substr(b + 1, s.size() - b-1);
	return t;
}


int main() {
	string str;
	int q;
	string o[101];
	string r[101];
	int a[101], b[101];

	cin >> str >> q;
	for(int i=0;i<q;i++){
		cin >> o[i] >> a[i] >> b[i];
		if (o[i] == "replace") cin >> r[i];
	}

	for (int i = 0; i < q; i++) {
		if (o[i] == "replace") {
			str = replace(str, r[i], a[i], b[i]);
		}
		else if (o[i] == "reverse") {
			str = reverse(str, a[i], b[i]);
		}
		else {
			print(str, a[i], b[i]);
		}
	}
}
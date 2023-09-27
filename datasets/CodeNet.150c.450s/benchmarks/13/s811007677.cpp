#include <iostream>
#include <string>
#include <stddef.h>
#include <stack>
#include <queue>
#include <cctype>
#include <stdio.h>

using namespace std;


int main() {
	string s;
	string p;
	cin >> s >> p;
	s = s + s;
	bool a = false;
	for (int  i = 0; i < s.size(); i++) {
		if (s.substr(i, p.size()) == p) {
			cout << "Yes" << endl;
			a = true;
			break;
		}
	}
	if (!a) cout << "No" << endl;
}
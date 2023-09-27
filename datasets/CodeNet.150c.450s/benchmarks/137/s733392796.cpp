#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <utility>

using namespace std;

int main() {

	int n;
	scanf("%d", &n);

	set<string> v;
	for (int i = 0; i < n; ++i) {
		char s[10];
		scanf("%s", s);
		char c[3];
		scanf("%s", c);
		string q(c);

		if (!strcmp(s, "insert")) {
			v.insert(q);
		} else {
			set<string>::iterator it = v.find(q);
			if (it != v.end()) {
				cout << "yes" << endl;
			} else {
				cout << "no" << endl;
			}
		}
	}

	return 0;
}
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <cctype>

using namespace std;

int main() {

	string st;
	int stlen;

	while (cin >> st) {
		stlen = st.size();
		for (int i = stlen - 1; i >= 0; i--) {
			cout << st[i];
		}
		putchar('\n');
	}
	
	return 0;
}
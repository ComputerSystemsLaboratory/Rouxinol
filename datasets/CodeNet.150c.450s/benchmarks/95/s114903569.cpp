#define _USE_MATH_DEFINES
#include <iostream>
#include <stdio.h>
#include <string>
#include <cstdlib>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	int n, ans = 0, R = 0, L = 0, loc = 0;
	string s[100];
	for (;;) {
		ans = R = L = loc = 0;
		cin >> n;
		if (n == 0) return 0;
		for (int i = 0; i < n; i++) cin >> s[i];
		for (int i = 0; i < n; i++) {
			if (s[i] == "lu") L++;
			else if (s[i] == "ld") L--;
			else if (s[i] == "ru") R++;
			else if (s[i] == "rd") R--;
			if (L == R&&L != loc) {
				ans++;
				loc = L;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
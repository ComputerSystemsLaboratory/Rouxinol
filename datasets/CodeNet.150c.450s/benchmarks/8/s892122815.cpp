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
int n;
string t[1000];
string h[1000];
int T;
int H;

bool comp(string s, string t) {
	if (s.front() - t.front() < 0) return true;
	else if (s.front() - t.front() > 0) return false;
	else {
		s.erase(s.begin());
		t.erase(t.begin());
		return comp(s, t);
	}
}

int main() {
	T = 0; H = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> t[i] >> h[i];
	}
	for (int i = 0; i < n; i++) {
		if (t[i] == h[i]) {
			T++;
			H++;
		}
		else {
			if (comp(t[i], h[i])) H += 3;
			else T += 3;
		}
	}
	cout << T << ' ' << H << endl;
}
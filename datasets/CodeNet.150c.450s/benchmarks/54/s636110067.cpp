#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <stack>
#include <queue>
#include <cmath>

#define rep(i,j,k) for(int i=(int)j;i<(int)k;i++)
#define vc vector;

const int INF = 100000000;

using namespace std;

void p(int x) {
	cout << x << endl;
}

void pp(string s) {
	cout << s << endl;
}

int main() {
	string s;
	cin >> s;
	int count = 0;
	while (1) {
		string ss;
		cin >> ss;
		if (ss == "END_OF_TEXT")break;

		if (s.length() == ss.length()) {
			bool judge = true;
			rep(i, 0, s.length()) {
				if (s[i] != ss[i] && s[i] != ss[i] + 'a' - 'A' && s[i] != ss[i] + 'A' - 'a') {
					judge = false;
					break;
				}
			}
			if (judge) count++;
		}
	}
	p(count);

	return 0;
}
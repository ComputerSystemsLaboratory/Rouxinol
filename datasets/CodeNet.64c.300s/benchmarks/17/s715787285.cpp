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
	while (1) {
		int x, y, s;
		cin >> x >> y >> s;
		if (x == 0 && y == 0 && s == 0)break;

		int maxx = 0;
		for (int i = 1; i < s; i++) {
			for (int j = s - 1; j > 0; j--) {
				if ((i*(100 + x)) / 100 + (j*(100 + x)) / 100 == s) {
					maxx = max(maxx, (i*(100 + y)) / 100 + (j*(100 + y)) / 100);
				}
			}
		}

		cout << maxx << endl;
	}

	return 0;
}
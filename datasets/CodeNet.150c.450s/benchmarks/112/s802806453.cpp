#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <vector>
#include <cstdlib>
#include <list>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main() {

	int n,len;
	char c[100000];
	char ans[100000];

	while (cin >> n, n) {

		for (int i = 0; i < 2 * n; i += 2) {
			cin >> c[i] >> c[i + 1];
		}

		cin >> len;
		for (int i = 0; i < len; i++) {
			cin >> ans[i];
			for (int j = 0; j < 2 * n; j += 2) {
				if (ans[i] == c[j]) {
					ans[i] = c[j + 1];
					break;
				}
			}
		}
		for (int i = 0; i < len; i++) {
			cout << ans[i];
		}
		cout << endl;
	}

	return 0;
}
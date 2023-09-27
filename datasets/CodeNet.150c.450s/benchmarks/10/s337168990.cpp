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

using namespace std;

int main(void) {

	int b, f, r, v, n;
	int a[12][10] = { 0 };

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> b >> f >> r >> v;
		a[(b - 1) * 3 - 1 + f][r - 1] += v;
	}

	for (int i = 0; i < 12; i++) {
		if (i == 3 || i == 6 || i == 9)
			cout << "####################" << endl;
		for (int j = 0; j < 10; j++) {
			cout << " ";
			cout << a[i][j];
		}
		cout << endl;
	}

	return 0;
}
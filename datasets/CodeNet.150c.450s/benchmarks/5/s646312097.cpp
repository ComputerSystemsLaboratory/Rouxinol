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

	int n, a[100] = { 0 };

	cin >> n;

	for (int i = 0;i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			swap(a[j], a[j + 1]);
		}
	}

	for (int i = 0; i < n; i++) {
		if (i != 0)
			cout << " ";
		cout << a[i];
	}
	cout << endl;

	return 0;
}
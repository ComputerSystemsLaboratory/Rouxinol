#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int n;
vector<int> a;

void show() {
	for (int i = 0; i < n; i++) {
		printf("%d%c", a[i], i != n - 1 ? ' ' : '\n');
	}
}


int main() {
	cin >> n;
	a.assign(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	show();

	for (int i = 1; i < n; i++) {
		int v = a[i];
		int j = i - 1;
		while (j >= 0 && a[j] > v) {
			a[j + 1] = a[j];
			j--;
			a[j + 1] = v;
		}
		show();
	}
	return 0;
}
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int bubblesort(vector<int> &a) {
	int n = a.size();
	int changes = 0;

	bool hasNext = true;
	while (hasNext) {
		hasNext = false;
		for (int i = n - 1; i >= 1; i--) {
			if (a[i] < a[i - 1]) {
				swap(a[i], a[i - 1]);
				hasNext = true;
				changes++;
			}
		}
	}
	return changes;
}

int main() {
	int n;

	cin >> n;
	vector<int> a(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int changes = bubblesort(a);
	for (int i = 0; i < n; i++) {
		printf("%d%c", a[i], i == n - 1 ? '\n' : ' ');
	}
	printf("%d\n", changes);


	return 0;
}
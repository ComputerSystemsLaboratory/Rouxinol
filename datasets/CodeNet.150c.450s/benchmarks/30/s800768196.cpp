#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int selection_sort(vector<int> &a) {
	int n = a.size();
	int changes = 0;

	vector<int>::iterator it, min_it;
	for (it = a.begin(); it != a.end(); it++) {
		min_it = min_element(it, a.end());
		if (*it > *min_it) {
			swap(*it, *min_it);
			changes++;
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

	int changes = selection_sort(a);
	for (int i = 0; i < n; i++) {
		printf("%d%c", a[i], i == n - 1 ? '\n' : ' ');
	}
	printf("%d\n", changes);


	return 0;
}
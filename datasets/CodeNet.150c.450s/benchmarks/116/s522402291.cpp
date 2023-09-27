#include <stdlib.h>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> results;

	while (true) {
		int n, k;
		cin >> n >> k;
		if (n == 0 && k == 0) break;

		int* a = new int[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		int max = 0;
		int prev = 0;
		for (int i = 0; (i + k - 1) < n; i++) {
			int s = 0;
			if (prev == 0) {
				for (int j = i; j <= (i + k - 1); j++) {
					s += a[j];
				}
			} else {
				s = prev;
				s -= a[i - 1];
				s += a[i + k - 1];
			}
			prev = s;

			if (max < s) {
				max = s;
			}
		}

		results.push_back(max);
	}

	for (int i = 0; i < results.size(); i++)
		cout << results[i] << endl;

	return 0;
}
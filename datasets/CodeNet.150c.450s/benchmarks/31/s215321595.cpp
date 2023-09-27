#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	int input;
	int min = INT_MAX, max = INT_MIN;

	for (int i = 0; i < n; i++) {
		cin >> input;

		if (max < input - min) max = input - min;
		if (min > input) min = input;
	}

	cout << max << endl;

	return 0;
}


#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	long long n, num[200000];
	long long temp, nmax = -1000000000, nmin;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	nmin = num[0];
	for (int i = 1; i < n; i++) {
		nmax = max(nmax, num[i] - nmin);
		nmin = min(nmin, num[i]);
	}

	cout << nmax << endl;

	return 0;
}
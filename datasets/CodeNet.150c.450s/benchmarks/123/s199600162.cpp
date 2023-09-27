#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int n, a[10010];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == 2) sum++;
		else {
			int k = ceil(sqrt(a[i]));
			for (int j = 2; j <= k; j++) {
				if (a[i] % j == 0) break;
				if (j == k) sum++;
			}
		}
	}
	cout << sum << endl;
	return 0;
}
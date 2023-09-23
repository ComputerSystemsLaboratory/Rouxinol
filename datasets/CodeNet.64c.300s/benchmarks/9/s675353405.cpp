#include<iostream>
using namespace std;
int main() {
	int n,j;
	long long k = 100000;
	cin >> n;
	for (int i = 0; i < n; i++) {
		k += k / 20;
		j = k % 1000;
		if (j != 0) {
			k += 1000 - j;
		}
	}
	cout << k << endl;
	return 0;
}
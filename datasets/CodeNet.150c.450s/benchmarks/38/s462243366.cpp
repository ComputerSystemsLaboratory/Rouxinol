#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(void) {
	int N, a[5];
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a[0] >> a[1] >> a[2];
		sort(a, a + 3);
		if (pow(a[2], 2) == pow(a[1], 2) + pow(a[0], 2)) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}
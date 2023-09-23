#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n, a[10000], i;
	int64_t sum = 0;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (i = 0; i < n; i++) {
		sum += a[i];
	}
	sort(a, a + n);
	cout << a[0] << " " << a[n - 1] << " " << sum << endl;
	return 0;
}
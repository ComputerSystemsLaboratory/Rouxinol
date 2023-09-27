#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	long long sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	
	sort(a.begin(), a.end());
	cout << a[0] << " " << a[n-1] << " " << sum << endl;
	return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	long int n, sum = 0;
	cin >> n;
	vector<long int> a(n,0);

	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	sort(a.begin(), a.end(), greater<int>());

	for (int i = 0; i < n; i++) {
		sum = sum + a[i];
	}

	cout << a[n - 1] << " " << a[0] << " " << sum << endl;

	return 0;
}
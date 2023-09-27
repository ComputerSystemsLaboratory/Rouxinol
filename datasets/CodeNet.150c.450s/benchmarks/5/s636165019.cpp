#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	int n,A;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i]; 
	}
	for (int j = 0; j <n/2; j++) {
		A = a[j];
		a[j] = a[n - j - 1];
		a[n - j - 1] = A;
	}
	for (int i = 0; i < n; i++) {
		cout << a[i];
		if (i != n - 1) {
			cout << " ";
		}
	}
	cout << endl;
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> b(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int j = 0; j < n; j++) {
		b[j] = a[n - j - 1];
	}
	cout << b[0];
	for (int k = 1; k < n; k++) {
		cout << " " << b[k];
	}
cout << endl;
}

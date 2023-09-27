#include<iostream>
using namespace std;
bool isPower2(int);

int main() {
	int n;
	long long a[300];
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	for (int i = 1; i <= n; i++) {
		cout << "node " << i << ": key = " << a[i] << ", ";
		if (1 <= i / 2)	cout << "parent key = " << a[i / 2] << ", ";
		if (2*i <= n) cout << "left key = " << a[2*i] << ", ";
		if (2*i + 1 <= n) cout << "right key = " << a[2*i+1] << ", ";
		cout << endl;
	}
}

bool isPower2(int k) {
	while (1) {
		if (k == 1) return true;
		if (k % 2 == 1) return false;
		else {
			k /= 2;
		}
	}
}
#include "bits/stdc++.h"
using namespace std;

int main() {
	int b;
	cin >> b;
	vector<int> a(b);
	for (int i = 0; i < b; ++i) {
		cin >> a[i];
	}
	cout << a[b-1];
	for (int y = b-2; y >=0; --y) {
		cout << " " << a[y];
	}
	cout << endl;
}
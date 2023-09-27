#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n,S[14], K[14], D[14], H[14];
int main() {
	cin >> n;
	vector <char> a(n);
	vector <int> b(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
	}
	for (int i = 0; i < n; i++) {
		if (a[i] == 'S') {
			S[b[i]] = 1;
		}
		else if (a[i] == 'C') {
			K[b[i]] = 1;
		}
		else if (a[i] == 'D') {
			D[b[i]] = 1;
		}
		else if (a[i] == 'H') {
			H[b[i]] = 1;
		}
	}
	for (int j = 1; j <= 13; j++) {
		if (S[j] == 0) {
			cout << 'S' << " " << j << endl;
		}
	}
	for (int j = 1; j <= 13; j++) {
		if (H[j] == 0) {
			cout << 'H' << " " << j << endl;
		}
	}
	for (int j = 1; j <= 13; j++) {
		if (K[j] == 0) {
			cout << 'C' << " " << j << endl;
		}
	}
	for (int j = 1; j <= 13; j++) {
		if (D[j] == 0) {
			cout << 'D' << " " << j << endl;
		}
	}
}
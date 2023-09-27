#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
int n; string a[36], b[36];
int main() {
	cin >> n;
	for(int i = 0; i < n; i++) cin >> a[i], b[i] = a[i];
	for(int i = 0; i < n; i++) {
		for(int j = n - 1; j > i; j--) {
			if(b[j - 1][1] > b[j][1]) swap(b[j - 1], b[j]);
		}
	}
	for(int i = 0; i < n; i++) cout << (i ? " " : "") << b[i]; cout << endl;
	cout << "Stable" << endl;
	for(int i = 0; i < n; i++) {
		int r = i;
		for(int j = i + 1; j < n; j++) {
			if(a[j][1] < a[r][1]) r = j;
		}
		swap(a[i], a[r]);
	}
	for(int i = 0; i < n; i++) cout << (i ? " " : "") << a[i]; cout << endl;
	cout << (equal(a, a + n, b) ? "Stable" : "Not stable") << endl;
}
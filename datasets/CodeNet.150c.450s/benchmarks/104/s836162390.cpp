#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	int w, n, a[100], b[100],sw,ap;
	char ch;
	cin >> w >> n;
	for (int i = 1; i <= w; i++) {
		a[i] = i;
	}
	for (int i = 1; i <= n; i++) {
		cin >> sw >> ch >> ap;
		swap(a[sw], a[ap]);
	}
	for (int i = 1; i <= w; i++) {
		cout << a[i] << endl;
	}
	return 0;
}
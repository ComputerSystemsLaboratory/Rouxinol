#include<iostream>
using namespace std;
int main() {
	int n, a[1000],i,j,k;
	cin >> n;
	for (i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (j = i-1; j > 0; j--) {
		if (j == 1) {
			cout << a[1];
		}
		else {
			cout << a[j] << " ";
		}
	}
	cout << endl;
	return 0;

}
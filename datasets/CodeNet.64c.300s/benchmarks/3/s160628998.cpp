#include<cmath>
#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;



int main() {
	int n;
	int a[100];
	cin >> n;
	for (int i = n - 1; i > -1; i--) {
		cin >> a[i];
	}
	for (int j = 0; j < n - 1; j++) {
		cout << a[j] << " ";
	}

	cout << a[n - 1] << endl;

	return 0;
}
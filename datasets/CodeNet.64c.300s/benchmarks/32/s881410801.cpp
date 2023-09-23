#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	long n, sum;
	int min, max;
	int a[9999] = {};
	cin >> n;
	for (int i=0;i<n;i++) {
		cin >> a[i];
	}
	min = a[0];
	max = a[0];
	sum = a[0];
	for (int k=1;k<n;k++) {
		if (max < a[k]) max = a[k];
		if (min > a[k]) min = a[k];
		sum += a[k];
	}
	cout << min << ' ' << max << ' ' << sum << endl;

}
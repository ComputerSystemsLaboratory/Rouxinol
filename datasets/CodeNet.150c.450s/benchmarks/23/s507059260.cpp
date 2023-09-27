#include<iostream>
using namespace std;

int makeFibonacci(int n) {
	int a[100];
	a[0] = 1;
	a[1] = 1;

	for (int i = 2;i <= n ;i++) {
		a[i] = a[i - 2] + a[i - 1];
	}

	return a[n];
}


int main(void) {
	int n;
	cin >> n;

	int ans = makeFibonacci(n);

	cout << ans << endl;

	return 0;

}
#include<iostream>

using namespace std;

int n[44];

int fib(int x) {
	n[0] = 1;
	n[1] = 1;
	for (int i = 2; i <= x; i++) {
		n[i] = n[i - 1] + n[i - 2];
	}
	return n[x];
}

int main() {
	int n;
	cin >> n;
	cout << fib(n) << endl;
	return 0;
}
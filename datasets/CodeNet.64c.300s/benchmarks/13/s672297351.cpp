
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

int n;
int d[50];
int fib(int i) {
	if (d[i] > 0) return d[i];

	int res = fib(i - 1) + fib(i - 2);
	d[i] = res;
	return res;
}
int main() {
	d[0] = 1;
	d[1] = 1;
	cin >> n;
	cout << fib(n) << endl;
	return 0;
}
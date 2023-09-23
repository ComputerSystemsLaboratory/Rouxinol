#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int x) {
	int s = int(sqrt(double(x)));
	//cout << " " << s << endl;
	if (x == 2) return true;
	if (x % 2 == 0 || x <2)return false;
	for (int i = 2; i <= s+1; i++) {
		if (x%i == 0)return false;
	}
	return true;
}

int main() {
	int n, x, cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (isPrime(x))cnt++;
	}
	cout << cnt << endl;
	return 0;
}
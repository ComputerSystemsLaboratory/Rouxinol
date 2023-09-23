#include<iostream>
#include<cmath>
using namespace std;

bool checkp(int m) {
	if (m == 2) return true;
	if (m <= 1 || m % 2 == 0) return false;
	for (int i = 3; i <= sqrt(m); i += 2) {
		if (m % i == 0) return false;
	}
	return true;
}

int main() {
	int n, m, cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> m;
		if (checkp(m)) cnt++;
	}

	cout << cnt << endl;
	return 0;
}
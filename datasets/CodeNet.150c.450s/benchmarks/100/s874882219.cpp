#include <bits/stdc++.h>
#define PI 3.14159265359
using namespace std;

int main() {
	int n;
	cin >> n;

	int64_t a = 1;
	int x = n;
	for (int i = 0; i < n; i++) {
		a *= x;
		x--;
		//cout << i << endl;
	}

	cout << a << endl;
}

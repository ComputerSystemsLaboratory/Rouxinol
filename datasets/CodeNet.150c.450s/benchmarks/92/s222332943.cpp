#include <bits/stdc++.h>

using namespace std;

int main() {
	int a, b;
	while (cin >> a >> b) {
		int sum = a + b;
		int i;
		for (i = 0; sum != 0; ++i) {
			sum /= 10;
		}
		cout << i << endl;
	}
}
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n, i, j, x, total = 0;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> x;
		if (x == 2) total++;
		if (x % 2 != 0) {
			for (j = 3; j <= (double)sqrt(x); j+=2){
				if (x%j == 0) goto a;
			}
			total++;
		a:;
		}
	}
	cout << total << endl;
}
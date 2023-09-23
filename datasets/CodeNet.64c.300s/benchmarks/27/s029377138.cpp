#include<iostream>
using namespace std;
int main() {
	int n, x, i, j, k, sum;
	cin >> n >> x;
	while (n != 0 || x != 0) {
		sum = 0;
		for (i = 1; i <= n; i++) {
			for (j = i + 1; j <= n; j++) {
				for (k = j + 1; k <= n; k++) {
					if (i + j + k == x) {
						sum++;
					}
				}
			}
		}
		cout << sum << endl;
		cin >> n >> x;
	}
	
	
	return 0;
}

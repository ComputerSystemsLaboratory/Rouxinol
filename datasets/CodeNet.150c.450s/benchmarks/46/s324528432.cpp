#include <iostream>
using namespace std;

int main() {
	int n, x;
	int no;
	int i, j, k;
	while(1) {
		cin >> n >> x;
		no = 0;
		if (n == 0 && x == 0) break;
		for (i = 1; i <= n; i++) {
			for (j = i+1; j <= n; j++) {
				for (k = j+1; k <= n; k++) {
					if (!(i == j || j == k || k == i)) {
						if ((i+j+k) == x) no++;
					}
				}
			}
		}
		cout << no << endl;
	}
	return 0;
}
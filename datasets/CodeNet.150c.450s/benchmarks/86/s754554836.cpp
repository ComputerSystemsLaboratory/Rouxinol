#include<iostream>
using namespace std;

int main() {
	int n, m, p, x[101],k=0, ans[101];

	while (true) {
		int sum = 0;
		cin >> n >> m >> p;

		if (n == 0) {
			if (m == 0) {
				if (p == 0) {
					break;
				}
			}
		}

		for (int i = 1; i <= n; i++) {
			cin >> x[i];
			sum = sum + x[i];
		}
		sum = sum*(100-p);
		

		if (x[m] != 0) {
			sum = (int)sum / x[m];
			ans[k] = sum;
			k++;
		}

		else {
			ans[k] = 0;
			k++;
		}

	}
	for (int i = 0; i < k; i++)
		cout << ans[i] << endl;
}
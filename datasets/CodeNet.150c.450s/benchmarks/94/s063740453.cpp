#include<iostream>
#include<cstdio>
using namespace std;

int main() {
	int n, a[100], memory, i = 0, flag = 1, b = 0;

	cin >> n;

	for (i = 0; i < n; i++)
		cin >> a[i];

	i = 0;

	while (flag) {
		flag = 0;

		for (int j = n - 1; j >= i + 1; j--) {

			if (a[j] < a[j - 1]) {
				memory = a[j];

				a[j] = a[j - 1];

				a[j - 1] = memory;

				flag = 1;

				b += 1;
			}
		}

		i++;
	}

	for (i = 0; i < n; i++) {
		cout << a[i];

		if (i == n - 1) cout << endl;

		else cout << " ";
	}

	printf("%d\n", b);

	return 0;
}
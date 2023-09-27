#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

#define MAX 50000
int n, dif, a[MAX];

int main() {
	cin >> n;
	while (n) {
		dif = 1000000;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a + n);

		for (int i = 0; i < n - 1; i++) {
			if (abs(a[i] - a[i + 1]) < dif) {
				dif = abs(a[i] - a[i + 1]);
			}
		}
		cout << dif << endl;

		cin >> n;
	}

	return 0;
}
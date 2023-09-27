#include <iostream>
using namespace std;

void sort(int a[], int b[], int n)  {
	for (int i = 0; i < n; i++)
		for (int j = i; j > 0; j--)
			if (b[j-1] < b[j]) {
				int t = b[j-1];
				b[j-1] = b[j];
				b[j] = t;
				int s = a[j-1];
				a[j-1] = a[j];
				a[j] = s;
			}
}

int main() {
	while (true) {
		int n, m;
		cin >> n >> m;
		if (n == 0 && m == 0) break;
		int d[n], p[n];
		for (int i = 0; i < n; i++)
			cin >> d[i] >> p[i];
		
		sort(d, p, n);
		
		int sum = 0;
		for (int i = 0; i < n; i++)
			sum += d[i] * p[i];
		
		for (int i = 0; i < n; i++) {
			if (m >= d[i]) {
				sum -= d[i] * p[i];
				m -= d[i];
			} else {
				sum -= p[i] * m;
				m = 0;
			}
			if (m == 0) break;
		}
		cout << sum << endl;
	}
	return 0;
}
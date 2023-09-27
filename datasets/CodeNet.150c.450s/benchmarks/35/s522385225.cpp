#include<iostream>
using namespace std;
int main()
{
	while (1) {
		int n, i, j, a[5000], max = -100001, c;
		cin >> n;
		if (n == 0) {
			break;
		}
		for (i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (i = 0; i < n; i++) {
			c = 0;
			for (j = i; j < n; j++) {
				c+= a[j];
				max = max < c ? c : max;
			}
		}
		cout << max << endl;
	}
	return 0;
}
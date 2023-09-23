#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	while (1) {
		long a[5001] = { 0 };
		long n;
		cin >> n;
		if (n == 0)break;
		a[0] = 0;
		long maxv = -100000;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		for (int i = 1; i <= n; i++) {
			a[i] = max(a[i], a[i] + a[i - 1]);
			maxv = max(maxv, a[i]);
		}
		cout << maxv << endl;
	}
}
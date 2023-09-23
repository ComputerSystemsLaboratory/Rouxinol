#include <iostream>
using namespace std;
int n;
int main()
{
	cin >> n;
	int i,a[1000],b[1000],c[1000],x[1000],y[1000],z[1000],res[1000];
	for (i = 0; i < n; i++) {
		cin >> a[i] >> b[i] >> c[i];
		x[i] = a[i];
		if (x[i] < b[i]) {
			y[i] = x[i];
			x[i] = b[i];
		}
		else {
			y[i] = b[i];
		}
		if (x[i] < c[i]) {
			z[i] = y[i];
			y[i] = x[i];
			x[i] = c[i];
		}
		else if (y[i] < c[i]) {
			z[i] = y[i];
			y[i] = c[i];
		}
		else {
			z[i] = c[i];
		}
	}
	for (i = 0; i < n; i++) {
		res[i] = x[i] * x[i] - z[i] * z[i] - y[i] * y[i];
		if (res[i] == 0) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}
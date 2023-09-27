#include<iostream>
#include<algorithm>
using namespace std;
typedef long double LD;

int main() {
	int n;
	cin >> n;
	for (int x = 0;x < n;x++) {
		LD a, b, c, d, e, f, g, h;
		cin >> a >> b >> c >> d >> e >> f >> g >> h;

		LD i = (c - a)*(h - f);
		LD j = (d - b)*(g - e);

		if (i - j == 0)cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
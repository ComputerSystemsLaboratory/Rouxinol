#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, e,sin=3,data;
	cin >> a >> b >> c >> d >> e;
	while (sin > 2) {
		sin = 1;
		if (a < b) {
			data = a;
			a = b;
			b = data;
			sin = 3;
		}
		if (b < c) {
			data = b;
			b = c;
			c = data;
			sin = 3;
		}
		if (c < d) {
			data = c;
			c = d;
			d = data;
			sin = 3;
		}
		if (d < e) {
			data = d;
			d = e;
			e = data;
			sin = 3;
		}	
	}
	cout << a << " " << b << " " << c << " " << d << " " << e << endl;
}
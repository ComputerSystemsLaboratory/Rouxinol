#include<iostream>
#include<string>
#include<algorithm>	
#include<cmath>
using namespace std;
int main() {
	long long a, b, c = 1000001, d = -c, e = 0; cin >> a;
	for (int h = 1; h <= a; h++) {
		cin >> b;
		if (c > b) {
			c = b;
			//min
		}
		if (b > d) {
			d = b;
			//max
		}
		e += b;
	}
	cout << c << ' ' << d << ' ' << e << endl;
}

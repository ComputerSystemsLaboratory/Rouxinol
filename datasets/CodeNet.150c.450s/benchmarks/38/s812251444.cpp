#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	for (cin >> n; n; n--) {
		int a, b, c;
		cin >> a >> b;
		if (a < b) {
			int tmp = b;
			b = a;
			a = tmp;
		}
		cin >> c;
		if (a < c) {
			int tmp = c;
			c = a;
			a = tmp;
		}
		cout << (pow(a, 2) == pow(b, 2) + pow(c, 2) ? "YES" : "NO") << endl;
	}
	return 0;
}
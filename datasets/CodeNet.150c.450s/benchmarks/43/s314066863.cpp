#include <iostream>
using namespace std;

int n, a, b, ca, cb;

int main()
{
	while (cin >> n && n > 0) {
		a = b = 0;
		for (int i = 0; i < n; i++) {
			cin >> ca >> cb;
			if (ca > cb)
				a += ca + cb;
			else if (ca < cb)
				b += ca + cb;
			else {
				a += ca;
				b += cb;
			}
		}
		cout << a << " " << b << endl;
	}
	return 0;
}
#include <iostream>
using namespace std;

int main()
{
	for (unsigned long a, b, x, r; cin >> a >> b; cout << a << ' ' << x << endl) {
		unsigned long at = a, bt = b;
		do {
			r = a%b;
			a = b;
			b = r;
		} while (r);
		x = at / a *bt;
	}
	return 0;
}
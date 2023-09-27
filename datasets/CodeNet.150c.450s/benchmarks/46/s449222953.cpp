#include <iostream>
using namespace std;
int many(int, int);
int main() 
{
	int a, b, c;
	cin >> a;
	cin >> b;
	while (a != 0 || b != 0) {
		c = many(a, b);
		cout << c << endl;
		cin >> a;
		cin >> b;
	}
	return 0;
}

int many(int x, int y) 
{
	int n, m, r, p, q = 0;
	for (n = 1; n <= x; n++) {
		for (m = 1; m <= x; m++) {
			for (r = 1; r <= x; r++) {
				if (n < m && m < r) {
					p = n + m + r;
					if (p == y) {
						q = q + 1;
					}
				}
			}
		}
	}
	return q;
}
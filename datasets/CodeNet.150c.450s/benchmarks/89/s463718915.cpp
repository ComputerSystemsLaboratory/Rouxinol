#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

const int MAX = 10000010;

bool p[MAX];

int main ( void )
{
	fill(p, p+MAX, true);
	p[0] = p[1] = false;
	for (int i = 2, I = sqrt(MAX)+1; i < I; ++i) {
		if (!p[i]) { continue; }
		for (int j = i+i; j < MAX; j+=i) { p[j] = false; }
	}

	int a, d, n;
	while (cin >> a >> d >> n, a|d|n) {
		int i = 0;
		while (i != n) {
			if (p[a]) { ++i; }
			a += d;
		}
		cout << a - d << endl;
	}
	return 0;
}
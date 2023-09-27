#include <iostream>
#include <vector>
#include <cstdio>
#include <cmath>
#include <map>

using namespace std;

typedef long long ll;

double xx(double r) {
	return r*r;
}

ll gcd(ll a, ll b) {
	if (a == 0) return b;
	return gcd(b%a, a);
}

int main() {
	int a[4], b[4];
	while ( scanf("%d%d%d%d", &a[0], &a[1], &a[2], &a[3]) != EOF ) {
		for (int i = 0; i < 4; ++i) scanf("%d", &b[i]);

		map<int, bool> m;
		for (int i = 0; i < 4; ++i) m[a[i]] = true;

		int hit = 0, blow = 0;
		for (int i = 0; i < 4; ++i) {
			if (a[i] == b[i]) ++hit;
			else if (m[b[i]]) ++blow;
		}
		cout << hit << " " << blow << endl;
	}
}
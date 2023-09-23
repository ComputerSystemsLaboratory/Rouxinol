#define _USE_MATH_DEFINES
#include "bits/stdc++.h"
#define EPS 1e-10
using namespace std;
typedef long long llong;
int main() {
	int a = 0, b = 0;
	int x;
	for (int i = 0; i < 4; i++) {
		cin >> x;
		a += x;
	}
	for (int i = 0; i < 4; i++) {
		cin >> x;
		b += x;
	}
	cout << max(a, b) << endl;
	return 0;
}
#include <iostream>
#include <queue>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(){
	long long int x, y;
	while (cin >> x >> y) {
		long long int a, b, c;
		a = max(x, y);
		b = min(x, y);
		c = a % b;
		while (c) {
			a = b;
			b = c;
			c = a % b;
		}
		cout << b << ' ' << x * y / b << endl;
	}
	return 0;
}
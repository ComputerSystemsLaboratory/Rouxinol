#include<iostream>
using namespace std;

int main() {
	long long  a, b, c,d[10000],x;
	x = 0;

	cin >> a >> b >> c;

	for (a; a <=b; a++) {
		if (c%a == 0)
			x = x + 1;
		else
			x = x + 0;
	}
	cout << x << endl;
}
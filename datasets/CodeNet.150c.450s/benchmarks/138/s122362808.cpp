#include <iostream>
#include <stdio.h>
using namespace std;
int main(void)
{
	int x, y, d, work;
	cin >> x >> y;
	if (x < y) {
		work = x; x = y; y = work;
	}
	d = x % y;
	if (x % y == 0) d = y;
	while(x % y) {
		d = x % y;
		x = y; y = d;
	}
	cout << d << endl;
}
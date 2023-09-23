#include <iostream>

using namespace std;

int roundup(int d)
{
	int r = (d % 1000 > 0) ? 1 : 0;
	d /= 1000; d += r;
	return d * 1000;
}

int main()
{
	int debt = 100000;
	int n;
	cin >> n;
	
	for (int i=0; i<n; i++) {
		debt += (debt/20);
		debt = roundup(debt);
	}
	
	cout << debt << endl;
	
	return 0;
}
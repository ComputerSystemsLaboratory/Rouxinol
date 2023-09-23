#include<iostream>

using namespace std;

int x, y;

int gcd(int x, int y)
{
	if (y == 0) { return x; }
	return gcd(y, x%y);
}

int main()
{
	cin >> x >> y;
	cout << gcd(x, y) << endl;
    return 0;
}